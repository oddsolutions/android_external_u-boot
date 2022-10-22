/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * arch/arm/cpu/armv8/txlx/watchdog.c
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#include <common.h>
#include <asm/types.h>
#include <asm/arch/romboot.h>
#include <asm/arch/watchdog.h>
#include <asm/arch/io.h>
#include <asm/arch/timer.h>

void watchdog_init(uint32_t msec)
{
	// src: 24MHz
	// div: 24000 for 1ms
	// reset ao-22 and ee-21
	*P_WATCHDOG_CNTL = (1<<24)|(1<<25)|(1<<22)|(1<<21)|(24000-1);

	// set timeout
	*P_WATCHDOG_TCNT = msec;
	*P_WATCHDOG_RESET = 0;

	// enable
	*P_WATCHDOG_CNTL |= (1<<18);
}

void watchdog_reset(void)
{
	*P_WATCHDOG_RESET = 0;
}

void watchdog_disable(void)
{
	// turn off internal counter and disable
	*P_WATCHDOG_CNTL &= ~((1<<18)|(1<<25));
}
void reset_system(void)
{
	int i;
	_udelay(10000); //wait print
	while (1) {
		writel( 0x3 | (1 << 21) // sys reset en
					| (1 << 23) // interrupt en
					| (1 << 24) // clk en
					| (1 << 25) // clk div en
					| (1 << 26) // sys reset now
			, P_WATCHDOG_CNTL);
		writel(0, P_WATCHDOG_RESET);

		writel(readl(P_WATCHDOG_CNTL) | (1<<18), // watchdog en
			P_WATCHDOG_CNTL);
		for (i=0; i<100; i++)
			readl(P_WATCHDOG_CNTL);/*Deceive gcc for waiting some cycles */
	}
}

/* uboot reset interface */
void reset_cpu(unsigned long flag){
	reset_system();
}