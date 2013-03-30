
/*
 * Copyright Freddie Chopin 2013.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

/**
 * \file vectors_LPC43xx_Cortex-M4.c
 * \brief LPC43xx, Cortex-M4 core vector table and default weak handlers
 *
 * chip: LPC43xx, Cortex-M4 core
 *
 * \author Freddie Chopin, http://www.freddiechopin.pl http://www.distortec.com
 * \date 2013-03-30
 */

/*---------------------------------------------------------------------------------------------------------------------+
| provide default weak handlers
+---------------------------------------------------------------------------------------------------------------------*/

// NMI
__attribute__ ((weak)) void NMI_Handler(void)
{
	while (1);
}

// Hard Fault
__attribute__ ((weak)) void HardFault_Handler(void)
{
	while (1);
}

// MPU Fault
__attribute__ ((weak)) void MemManage_Handler(void)
{
	while (1);
}

// Bus Fault
__attribute__ ((weak)) void BusFault_Handler(void)
{
	while (1);
}

// Usage Fault
__attribute__ ((weak)) void UsageFault_Handler(void)
{
	while (1);
}

// Reserved 0x1C
__attribute__ ((weak)) void __Reserved_0x1C_Handler(void)
{
	while (1);
}

// Reserved 0x20
__attribute__ ((weak)) void __Reserved_0x20_Handler(void)
{
	while (1);
}

// Reserved 0x24
__attribute__ ((weak)) void __Reserved_0x24_Handler(void)
{
	while (1);
}

// Reserved 0x28
__attribute__ ((weak)) void __Reserved_0x28_Handler(void)
{
	while (1);
}

// SVCall
__attribute__ ((weak)) void SVC_Handler(void)
{
	while (1);
}

// Debug Monitor
__attribute__ ((weak)) void DebugMon_Handler(void)
{
	while (1);
}

// Reserved 0x34
__attribute__ ((weak)) void __Reserved_0x34_Handler(void)
{
	while (1);
}

// PendSV
__attribute__ ((weak)) void PendSV_Handler(void)
{
	while (1);
}

// SysTick
__attribute__ ((weak)) void SysTick_Handler(void)
{
	while (1);
}

// D/A Converter
__attribute__ ((weak)) void DAC_IRQHandler(void)
{
	while (1);
}

// Cortex-M0; Latched TXEV; for M4-M0 communication
__attribute__ ((weak)) void M0CORE_IRQHandler(void)
{
	while (1);
}

// General Purpose DMA
__attribute__ ((weak)) void DMA_IRQHandler(void)
{
	while (1);
}

// Reserved 0x4C
__attribute__ ((weak)) void __Reserved_0x4C_Handler(void)
{
	while (1);
}

// ORed flash bank A, flash bank B, EEPROM interrupts
__attribute__ ((weak)) void FLASH_EEPROM_IRQHandler(void)
{
	while (1);
}

// Ethernet
__attribute__ ((weak)) void ETH_IRQHandler(void)
{
	while (1);
}

// SD/MMC
__attribute__ ((weak)) void SDIO_IRQHandler(void)
{
	while (1);
}

// LCD
__attribute__ ((weak)) void LCD_IRQHandler(void)
{
	while (1);
}

// USB0
__attribute__ ((weak)) void USB0_IRQHandler(void)
{
	while (1);
}

// USB1
__attribute__ ((weak)) void USB1_IRQHandler(void)
{
	while (1);
}

// State Configurable Timer
__attribute__ ((weak)) void SCT_IRQHandler(void)
{
	while (1);
}

// Repetitive Interrupt Timer
__attribute__ ((weak)) void RIT_IRQHandler(void)
{
	while (1);
}

// Timer0
__attribute__ ((weak)) void TIMER0_IRQHandler(void)
{
	while (1);
}

// Timer1
__attribute__ ((weak)) void TIMER1_IRQHandler(void)
{
	while (1);
}

// Timer2
__attribute__ ((weak)) void TIMER2_IRQHandler(void)
{
	while (1);
}

// Timer3
__attribute__ ((weak)) void TIMER3_IRQHandler(void)
{
	while (1);
}

// Motor Control PWM
__attribute__ ((weak)) void MCPWM_IRQHandler(void)
{
	while (1);
}

// A/D Converter 0
__attribute__ ((weak)) void ADC0_IRQHandler(void)
{
	while (1);
}

// I2C0
__attribute__ ((weak)) void I2C0_IRQHandler(void)
{
	while (1);
}

// I2C1
__attribute__ ((weak)) void I2C1_IRQHandler(void)
{
	while (1);
}

// SPI
__attribute__ ((weak)) void SPI_IRQHandler(void)
{
	while (1);
}

// A/D Converter 1
__attribute__ ((weak)) void ADC1_IRQHandler(void)
{
	while (1);
}

// SSP0
__attribute__ ((weak)) void SSP0_IRQHandler(void)
{
	while (1);
}

// SSP1
__attribute__ ((weak)) void SSP1_IRQHandler(void)
{
	while (1);
}

// UART0
__attribute__ ((weak)) void UART0_IRQHandler(void)
{
	while (1);
}

// UART1, Combined UART interrupt with Modem interrupt
__attribute__ ((weak)) void UART1_IRQHandler(void)
{
	while (1);
}

// UART2
__attribute__ ((weak)) void UART2_IRQHandler(void)
{
	while (1);
}

// UART3, Combined USART interrupt with IrDA interrupt
__attribute__ ((weak)) void UART3_IRQHandler(void)
{
	while (1);
}

// I2S0
__attribute__ ((weak)) void I2S0_IRQHandler(void)
{
	while (1);
}

// I2S1
__attribute__ ((weak)) void I2S1_IRQHandler(void)
{
	while (1);
}

// SPI Flash Interface
__attribute__ ((weak)) void SPIFI_IRQHandler(void)
{
	while (1);
}

// SGPIO
__attribute__ ((weak)) void SGPIO_IRQHandler(void)
{
	while (1);
}

// GPIO0
__attribute__ ((weak)) void GPIO0_IRQHandler(void)
{
	while (1);
}

// GPIO1
__attribute__ ((weak)) void GPIO1_IRQHandler(void)
{
	while (1);
}

// GPIO2
__attribute__ ((weak)) void GPIO2_IRQHandler(void)
{
	while (1);
}

// GPIO3
__attribute__ ((weak)) void GPIO3_IRQHandler(void)
{
	while (1);
}

// GPIO4
__attribute__ ((weak)) void GPIO4_IRQHandler(void)
{
	while (1);
}

// GPIO5
__attribute__ ((weak)) void GPIO5_IRQHandler(void)
{
	while (1);
}

// GPIO6
__attribute__ ((weak)) void GPIO6_IRQHandler(void)
{
	while (1);
}

// GPIO7
__attribute__ ((weak)) void GPIO7_IRQHandler(void)
{
	while (1);
}

// GINT0
__attribute__ ((weak)) void GINT0_IRQHandler(void)
{
	while (1);
}

// GINT1
__attribute__ ((weak)) void GINT1_IRQHandler(void)
{
	while (1);
}

// Event Router
__attribute__ ((weak)) void EVRT_IRQHandler(void)
{
	while (1);
}

// C_CAN1
__attribute__ ((weak)) void CAN1_IRQHandler(void)
{
	while (1);
}

// Reserved 0xF0
__attribute__ ((weak)) void __Reserved_0xF0_Handler(void)
{
	while (1);
}

// Reserved 0xF4
__attribute__ ((weak)) void __Reserved_0xF4_Handler(void)
{
	while (1);
}

// ATIMER
__attribute__ ((weak)) void ATIMER_IRQHandler(void)
{
	while (1);
}

// RTC
__attribute__ ((weak)) void RTC_IRQHandler(void)
{
	while (1);
}

// Reserved 0x100
__attribute__ ((weak)) void __Reserved_0x100_Handler(void)
{
	while (1);
}

// WDT
__attribute__ ((weak)) void WDT_IRQHandler(void)
{
	while (1);
}

// Reserved 0x108
__attribute__ ((weak)) void __Reserved_0x108_Handler(void)
{
	while (1);
}

// C_CAN0
__attribute__ ((weak)) void CAN0_IRQHandler(void)
{
	while (1);
}

// QEI
__attribute__ ((weak)) void QEI_IRQHandler(void)
{
	while (1);
}

/*---------------------------------------------------------------------------------------------------------------------+
| vector table
+---------------------------------------------------------------------------------------------------------------------*/

extern const char __main_stack_end;			// imported main stack end (from linker script)

void Reset_Handler(void);					// import the address of Reset_Handler()

void (* const vectors[])(void) __attribute__ ((section(".vectors"))) =
{
		(void (*)(void))&__main_stack_end,	// Main stack end address
		Reset_Handler,						// Reset
		NMI_Handler,						// NMI
		HardFault_Handler,					// Hard Fault
		MemManage_Handler,					// MPU Fault
		BusFault_Handler,					// Bus Fault
		UsageFault_Handler,					// Usage Fault
		__Reserved_0x1C_Handler,			// Reserved 0x1C
		__Reserved_0x20_Handler,			// Reserved 0x20
		__Reserved_0x24_Handler,			// Reserved 0x24
		__Reserved_0x28_Handler,			// Reserved 0x28
		SVC_Handler,						// SVCall
		DebugMon_Handler,					// Debug Monitor
		__Reserved_0x34_Handler,			// Reserved 0x34
		PendSV_Handler,						// PendSV
		SysTick_Handler,					// SysTick
		DAC_IRQHandler,						// D/A Converter
		M0CORE_IRQHandler,					// Cortex-M0; Latched TXEV; for M4-M0 communication
		DMA_IRQHandler,						// General Purpose DMA
		__Reserved_0x4C_Handler,			// Reserved 0x4C
		FLASH_EEPROM_IRQHandler,			// ORed flash bank A, flash bank B, EEPROM interrupts
		ETH_IRQHandler,						// Ethernet
		SDIO_IRQHandler,					// SD/MMC
		LCD_IRQHandler,						// LCD
		USB0_IRQHandler,					// USB0
		USB1_IRQHandler,					// USB1
		SCT_IRQHandler,						// State Configurable Timer
		RIT_IRQHandler,						// Repetitive Interrupt Timer
		TIMER0_IRQHandler,					// Timer0
		TIMER1_IRQHandler,					// Timer1
		TIMER2_IRQHandler,					// Timer2
		TIMER3_IRQHandler,					// Timer3
		MCPWM_IRQHandler,					// Motor Control PWM
		ADC0_IRQHandler,					// A/D Converter 0
		I2C0_IRQHandler,					// I2C0
		I2C1_IRQHandler,					// I2C1
		SPI_IRQHandler,						// SPI
		ADC1_IRQHandler,					// A/D Converter 1
		SSP0_IRQHandler,					// SSP0
		SSP1_IRQHandler,					// SSP1
		UART0_IRQHandler,					// UART0
		UART1_IRQHandler,					// UART1, Combined UART interrupt with Modem interrupt
		UART2_IRQHandler,					// UART2
		UART3_IRQHandler,					// UART3, Combined USART interrupt with IrDA interrupt
		I2S0_IRQHandler,					// I2S0
		I2S1_IRQHandler,					// I2S1
		SPIFI_IRQHandler,					// SPI Flash Interface
		SGPIO_IRQHandler,					// SGPIO
		GPIO0_IRQHandler,					// GPIO0
		GPIO1_IRQHandler,					// GPIO1
		GPIO2_IRQHandler,					// GPIO2
		GPIO3_IRQHandler,					// GPIO3
		GPIO4_IRQHandler,					// GPIO4
		GPIO5_IRQHandler,					// GPIO5
		GPIO6_IRQHandler,					// GPIO6
		GPIO7_IRQHandler,					// GPIO7
		GINT0_IRQHandler,					// GINT0
		GINT1_IRQHandler,					// GINT1
		EVRT_IRQHandler,					// Event Router
		CAN1_IRQHandler,					// C_CAN1
		__Reserved_0xF0_Handler,			// Reserved 0xF0
		__Reserved_0xF4_Handler,			// Reserved 0xF4
		ATIMER_IRQHandler,					// ATIMER
		RTC_IRQHandler,						// RTC
		__Reserved_0x100_Handler,			// Reserved 0x100
		WDT_IRQHandler,						// WDT
		__Reserved_0x108_Handler,			// Reserved 0x108
		CAN0_IRQHandler,					// C_CAN0
		QEI_IRQHandler,						// QEI
};
