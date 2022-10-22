/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * arch/arm/cpu/armv8/axg/firmware/bl21/serial.c
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#include "serial.h"
#include "io.h"
#include <asm/arch/secure_apb.h>

void serial_set_pin_port(unsigned port_base)
{
    setbits_le32(AO_RTI_PINMUX_REG0,3<<11);
}

#define UART_STP_BIT UART_CNTL_MASK_STP_1BIT
#define UART_PRTY_BIT 0
#define UART_CHAR_LEN   UART_CNTL_MASK_CHAR_8BIT

void serial_init(unsigned set)
{
    /* baud rate */
    writel(set| UART_STP_BIT
	        | UART_PRTY_BIT
	        | UART_CHAR_LEN
	        //please do not remove these setting , jerry.yu
	        | UART_CNTL_MASK_TX_EN
	        | UART_CNTL_MASK_RX_EN
	        | UART_CNTL_MASK_RST_TX
	        | UART_CNTL_MASK_RST_RX
	        | UART_CNTL_MASK_CLR_ERR
	,P_UART_CONTROL(UART_PORT_CONS));
    serial_set_pin_port(UART_PORT_CONS);
    clrbits_le32(P_UART_CONTROL(UART_PORT_CONS),
	    UART_CNTL_MASK_RST_TX | UART_CNTL_MASK_RST_RX | UART_CNTL_MASK_CLR_ERR);
}

int serial_putc(int c)
{
    if (c == '\n') {
        while ((readl(P_UART_STATUS(UART_PORT_CONS)) & UART_STAT_MASK_TFIFO_FULL));
        writel('\r', P_UART_WFIFO(UART_PORT_CONS));
    }
    /* Wait till dataTx register is not full */
    while ((readl(P_UART_STATUS(UART_PORT_CONS)) & UART_STAT_MASK_TFIFO_FULL));
    writel(c, P_UART_WFIFO(UART_PORT_CONS));
    /* Wait till dataTx register is empty */
    return c;
}

int serial_getc(void)
{
   unsigned char ch;
    /* Wait till character is placed in fifo */
	while ((readl(P_UART_STATUS(UART_PORT_CONS)) & UART_STAT_MASK_RFIFO_CNT) == 0) ;

    /* Also check for overflow errors */
    if (readl(P_UART_STATUS(UART_PORT_CONS)) & (UART_STAT_MASK_PRTY_ERR | UART_STAT_MASK_FRAM_ERR))
	{
	    setbits_le32(P_UART_CONTROL(UART_PORT_CONS),UART_CNTL_MASK_CLR_ERR);
	    clrbits_le32(P_UART_CONTROL(UART_PORT_CONS),UART_CNTL_MASK_CLR_ERR);
	}

    ch = readl(P_UART_RFIFO(UART_PORT_CONS)) & 0x00ff;
    return ((int)ch);
}

int serial_puts(const char *s){
	while (*s) {
		serial_putc(*s++);
	}
	return 0;
}

//support 64bit number, serial_put_hex(data, 64);
void serial_put_hex(unsigned long data,unsigned int bitlen)
{
	int i;
	for (i=bitlen-4;i>=0;i-=4) {
        if ((data>>i) == 0)
        {
            serial_putc(0x30);
            continue;
        }
        unsigned char s = (data>>i)&0xf;
        if (s<10)
            serial_putc(0x30+s);
        else
            serial_putc(0x61+s-10);
    }
}

void serial_put_dec(unsigned long data)
{
	char szTxt[10];
	szTxt[0] = 0x30;
	int i = 0;

	do {
		szTxt[i++] = (data % 10) + 0x30;
		data = data / 10;
	} while(data);

	for (--i;i >=0;--i)
		serial_putc(szTxt[i]);
}