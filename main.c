
/*
 * Copyright Freddie Chopin 2013.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

/**
 * \file main.c
 * \brief Main application.
 *
 * chip: LPC4330
 *
 * \author Freddie Chopin, http://www.freddiechopin.pl http://www.distortec.com
 * \date 2013-04-02
 */

#include "config.h"

#include "hdr/hdr_cgu.h"

#include "LPC43xx.h"

/*---------------------------------------------------------------------------------------------------------------------+
| local functions' declarations
+---------------------------------------------------------------------------------------------------------------------*/

static void fpu_enable(void);
static uint32_t pll_start(const uint32_t crystal, const uint32_t frequency);

/*---------------------------------------------------------------------------------------------------------------------+
| global functions
+---------------------------------------------------------------------------------------------------------------------*/

/**
 * \brief Main function.
 *
 * Enables FPU, starts PLL1, configures LED's GPIO as output and keeps on blinking it forever with frequency defined via
 * count_max variable.
 */

int main(void)
{
	volatile uint32_t count, count_max = 10000000;

	fpu_enable();
	pll_start(CRYSTAL, FREQUENCY);

	LPC_GPIO_PORT->DIR[LED_GPIO] |= LED;	// configure GPIO pin as output

	while (1)
	{
		for (count = 0; count < count_max; count++);	// delay
		LED_bb = 1;
		for (count = 0; count < count_max; count++);	// delay
		LED_bb = 0;
	}

	return 0;
}

/*---------------------------------------------------------------------------------------------------------------------+
| local functions
+---------------------------------------------------------------------------------------------------------------------*/

/**
 * \brief Enables FPU
 *
 * Enables FPU in Cortex-M4 for both privileged and user mode. This is done by enabling CP10 and CP11 coprocessors in
 * CPACR register (possible only when in privileged mode).
 */

static void fpu_enable(void)
{
#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)
	SCB->CPACR |= ((3UL << 10 * 2)|(3UL << 11 * 2));	// set CP10 and CP11 Full Access
#endif
}

/**
 * \brief Starts the PLL1
 *
 * Configures and enables PLL to achieve desired frequency with given crystal. PLL1 is set up, started and connected,
 * then M4 core clock source is set to PLL1.
 *
 * This function supports only the simplest "direct" mode, thats why the desired frequency must be in [156MHz; 204MHz]
 * range.
 *
 * \param [in] crystal is the frequency of the crystal resonator connected to the LPC4330
 * \param [in] frequency is the desired target frequency after enabling the PLL, must be in [156MHz; 204MHz] range
 *
 * \return real frequency that was set
 */

static uint32_t pll_start(const uint32_t crystal, const uint32_t frequency)
{
	volatile uint32_t count;
	uint32_t m, n, real_frequency, best_m = 0, best_n = 0, best_real_frequency = 0;

	// enable crystal oscillator, crystal < 15MHz - low frequency, crystal >= 15MHz - high frequency
	LPC_CGU->XTAL_OSC_CTRL = crystal < 15000000 ? 0 : CGU_XTAL_OSC_CTRL_HF_Pos;
	for (count = 0; count < 20000; count++);	// delay of at least 100us for crystal to start

	for (n = 1; n <= 4; n++)	// predivider - [1; 4]
		for (m = 1; m <= 256; m++)	// feedback divider (multiplier) [1; 256]
		{
			real_frequency = m * crystal / n;

			// valid output must be in [156MHz; 320MHz] range, update results if they are better what was already found
			if (real_frequency >= 156000000 && real_frequency <= 320000000 && real_frequency <= frequency &&
					real_frequency > best_real_frequency)
			{
				best_m = m;
				best_n = n;
				best_real_frequency = real_frequency;
			}
		}

	if (best_m != 0 && best_n != 0 && best_real_frequency != 0)	// valid settings found?
	{
		// enable PLL1 in direct mode, with autoblock, source - crystal
		LPC_CGU->PLL1_CTRL = CGU_PLL1_CTRL_DIRECT_Msk | CGU_PLL1_CTRL_AUTOBLOCK_Msk | CGU_x_CLK_SEL_CRYSTAL |
				((best_n - 1) << CGU_PLL1_CTRL_NSEL_Pos) | ((best_m - 1) << CGU_PLL1_CTRL_MSEL_Pos);
		while (!CGU_PLL1_STAT_LOCK_bb);	// wait for PLL1 lock
		LPC_CGU->BASE_M4_CLK = CGU_BASE_M4_CLK_AUTOBLOCK_Msk | CGU_x_CLK_SEL_PLL1;	// set base clock of M4 core to PLL1
	}

	return best_real_frequency;
}
