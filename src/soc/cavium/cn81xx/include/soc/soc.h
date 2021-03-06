/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef __SOC_CAVIUM_CN81XX_INCLUDE_SOC_SOC_H
#define __SOC_CAVIUM_CN81XX_INCLUDE_SOC_SOC_H

#include <types.h>

/* MIO BOOT Registers */
struct cn81xx_mio_boot {
	u8 rsvd0[0xb0];
	u64 thr;
	u8 rsvd1[0x8];
	u64 pin_defs;
	u8 rsvd2[0x8];
	u64 ap_jump;
	u64 rom_limit;
	u8 rsvd3[0x18];
	u64 bist_stat;
};
check_member(cn81xx_mio_boot, bist_stat, 0xf8);

/*
 * 0 = Board supplies 100MHz to DLM_REF_CLK
 * 1 = bOard supplies 50MHz to PLL_REFCLK
 * */
#define MIO_BOOT_PIN_DEFS_UART0_RTS	(1 << 16)
#define MIO_BOOT_PIN_DEFS_UART1_RTS	(1 << 17)

#endif  /* ! __SOC_CAVIUM_CN81XX_INCLUDE_SOC_SOC_H */
