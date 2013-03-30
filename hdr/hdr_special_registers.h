
/*
 * Copyright Freddie Chopin 2013.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

/**
 * \file hdr/hdr_special_registers.h
 * \brief Header with definition of bits in special registers in ARMv7-M(E) core
 *
 * Header with definition of bits in special registers in ARMv7-M(E) core
 *
 * chip: ARMv7-M(E) (Cortex-M3 / Cortex-M4)
 *
 * \author Freddie Chopin, http://www.freddiechopin.pl http://www.distortec.com
 * \date 2013-03-30
 */

#ifndef HDR_HDR_SPECIAL_REGISTERS_H_
#define HDR_HDR_SPECIAL_REGISTERS_H_

/*---------------------------------------------------------------------------------------------------------------------+
| PRIMASK - Register to mask out configurable exceptions
+---------------------------------------------------------------------------------------------------------------------*/

#define PRIMASK_MASK_EXCEPTIONS_bit			0

#define PRIMASK_MASK_EXCEPTIONS				(1 << PRIMASK_MASK_EXCEPTIONS_bit)

/*---------------------------------------------------------------------------------------------------------------------+
| FAULTMASK - Register to raise priority to the HardFault level
+---------------------------------------------------------------------------------------------------------------------*/

#define FAULTMASK_MASK_EXCEPTIONS_bit		0

#define FAULTMASK_MASK_EXCEPTIONS			(1 << FAULTMASK_MASK_EXCEPTIONS_bit)

/*---------------------------------------------------------------------------------------------------------------------+
| CONTROL - The special-purpose control register
+---------------------------------------------------------------------------------------------------------------------*/

#define CONTROL_THREAD_UNPRIVILEGED_bit		0
#define CONTROL_ALTERNATE_STACK_bit			1

#define CONTROL_THREAD_UNPRIVILEGED			(1 << CONTROL_THREAD_UNPRIVILEGED_bit)
#define CONTROL_ALTERNATE_STACK				(1 << CONTROL_ALTERNATE_STACK_bit)

#endif	// HDR_HDR_SPECIAL_REGISTERS_H_
