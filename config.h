
/*
 * Copyright Freddie Chopin 2013.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

/**
 * \file config.h
 * \brief Basic configuration of the project
 * \author Freddie Chopin, http://www.freddiechopin.pl http://www.distortec.com
 * \date 2013-04-01
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "hdr/hdr_bitband.h"

/*---------------------------------------------------------------------------------------------------------------------+
| crystal resonator on the board and core frequency
+---------------------------------------------------------------------------------------------------------------------*/

/// quartz crystal resonator which is connected to the chip
enum { CRYSTAL = 12000000ul };

/// desired target frequency of the core
enum { FREQUENCY = 204000000ul };

/*---------------------------------------------------------------------------------------------------------------------+
| GPIO pin used for LED
+---------------------------------------------------------------------------------------------------------------------*/

/// GPIO port to which the LED is connected
enum { LED_GPIO = 1 };

/// pin number of the LED
enum { LED_pin = 11 };

/// LED pin mask
enum { LED = 1 << LED_pin };

/// bit-band "variable" to directly handle the pin
#define LED_bb								BITBAND(&LPC_GPIO_PORT->PIN[LED_GPIO], LED_pin)

#endif	// CONFIG_H_
