/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * arch/arm/include/asm/arch-txlx/cpu.h
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#ifndef _CPU_H
#define _CPU_H
//#include <config.h>
//#include <asm/plat-cpu.h>
//#include <asm/arch/ddr.h>

#define CONFIG_AML_MESON 1
#define CONFIG_AML_MESON_GX 1
#define CONFIG_AML_MESON_TXLX 1
/*enable viu probe*/
#define CONFIG_CMD_VIU_PROBE    1

/* Size of malloc() pool */
#define CONFIG_SYS_MALLOC_LEN		(64*1024*1024)

/* dram */
#define PHYS_SDRAM_1_BASE					0x00000000UL
#define PHYS_SDRAM_1_SIZE					(CONFIG_DDR_SIZE << 20)
#define CONFIG_SYS_SDRAM_BASE				PHYS_SDRAM_1_BASE
#define CONFIG_SYS_INIT_SP_ADDR				(0x08000000)

#define CONFIG_SYS_TEXT_BASE		0x01000000 /*16MB rsv*/
#define CONFIG_SYS_LOAD_ADDR		(PHYS_SDRAM_1_BASE + CONFIG_SYS_TEXT_BASE)

/* ? */
#define CONFIG_SYS_CBSIZE		512
#define CONFIG_SYS_PROMPT		SYS_PROMPT
#define CONFIG_SYS_PBSIZE		(CONFIG_SYS_CBSIZE + sizeof(CONFIG_SYS_PROMPT) + 16)

/* Generic Timer Definitions */
#define COUNTER_FREQUENCY		(0x1800000)	/* 24MHz */

/* support board late init */
#define CONFIG_BOARD_LATE_INIT
/* use "hush" command parser */
#define CONFIG_SYS_HUSH_PARSER

#define CONFIG_DTB_MEM_ADDR 0x1000000

#define CONFIG_AML_CUSTOMER_ID  (0)

//#define CONFIG_SILENT_CONSOLE
#define CONFIG_SILENT_CONSOLE_UPDATE_ON_RELOC
#define CONFIG_SILENT_U_BOOT_ONLY

//2017.05.11 new compress solution, only support BL33 LZ4 compress
#define CONFIG_AML_BL33_COMPRESS_ENABLE 1

//2017.10.19 TXLX only support v3 format for normal & secure boot
#define CONFIG_AML_SECURE_BOOT_V3 1

#define NR_CPUS     4

#define CONFIG_OF_LIBFDT_OVERLAY 1
#define CONFIG_CMD_DTIMG 1

#define CONFIG_AML_RSVD_ADDR	0x08300000
#define CONFIG_AML_RSVD_SIZE	0x100000

#endif /* _CPU_H */
