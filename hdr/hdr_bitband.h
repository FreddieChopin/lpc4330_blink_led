
/*
 * Copyright Freddie Chopin 2013.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

/**
 * \file hdr/hdr_bitband.h
 * \brief Header for bit-banding
 *
 * chip: ARMv7-M(E) (Cortex-M3 / Cortex-M4)
 *
 * \author Freddie Chopin, http://www.freddiechopin.pl http://www.distortec.com
 * \date 2013-04-01
 */

#ifndef HDR_HDR_BITBAND_H_
#define HDR_HDR_BITBAND_H_

/*---------------------------------------------------------------------------------------------------------------------+
| global defines
+---------------------------------------------------------------------------------------------------------------------*/

#define bitband_t							*(volatile unsigned long *)

/// start of SRAM region with bit-band alias
enum { BITBAND_SRAM_REF = 0x20000000 };

/// end of SRAM region with bit-band alias
enum { BITBAND_SRAM_END = 0x200FFFFF };

/// start of bit-band alias region of SRAM
enum { BITBAND_SRAM_BASE = 0x22000000 };

/// start of peripherals region with bit-band alias
enum { BITBAND_PERIPH_REF = 0x40000000 };

/// end of peripherals region with bit-band alias
enum { BITBAND_PERIPH_END = 0x400FFFFF };

/// start of bit-band alias region of peripherals
enum { BITBAND_PERIPH_BASE = 0x42000000 };

/// address of bitband for SRAM region
#define BITBAND_SRAM_ADDRESS(address, bit) \
	(BITBAND_SRAM_BASE + (((unsigned long)address) - BITBAND_SRAM_REF) * 32 + (bit) * 4)

/// address of bitband for peripherals region
#define BITBAND_PERIPH_ADDRESS(address, bit) \
	(BITBAND_PERIPH_BASE + (((unsigned long)address) - BITBAND_PERIPH_REF) * 32 + (bit) * 4)

/// address of bitband for any region
#define BITBAND_ADDRESS(address, bit)		( \
	(((unsigned long)address) >= BITBAND_SRAM_REF) && (((unsigned long)address) <= BITBAND_SRAM_END) ? \
		BITBAND_SRAM_ADDRESS(address, bit) : \
	(((unsigned long)address) >= BITBAND_PERIPH_REF) && (((unsigned long)address) <= BITBAND_PERIPH_END) ? \
		BITBAND_PERIPH_ADDRESS(address, bit) : \
	0 /* fail */ \
	)

/// bitband variable in SRAM region
#define BITBAND_SRAM(address, bit)			(bitband_t BITBAND_SRAM_ADDRESS(address, bit))

/// bitband variable in peripherals region
#define BITBAND_PERIPH(address, bit)		(bitband_t BITBAND_PERIPH_ADDRESS(address, bit))

/// bitband variable in any region
#define BITBAND(address, bit)				(bitband_t BITBAND_ADDRESS(address, bit))

#endif	// HDR_HDR_BITBAND_H_
