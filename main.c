
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
 * \date 2013-04-01
 */

#include "config.h"

#include "LPC43xx.h"

/*---------------------------------------------------------------------------------------------------------------------+
| global functions
+---------------------------------------------------------------------------------------------------------------------*/

/**
 * \brief Main function.
 *
 * Configures LED's GPIO as output and keeps on blinking it forever with frequency defined via count_max variable.
 */

int main(void)
{
	volatile uint32_t count, count_max = 1000000;

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
