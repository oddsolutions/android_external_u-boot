/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * drivers/usb/gadget/aml_tiny_usbtool/dwc_pcd_irq.h
 *
 * Copyright (C) 2020 Amlogic, Inc. All rights reserved.
 *
 */

#ifndef __DWC_PCD_IRQ_H__
#define __DWC_PCD_IRQ_H__

int dwc_pcd_irq(void);
int dwc_otg_irq(void);

/**
 * States of EP0.
 */
typedef enum ep0_state {
	EP0_DISCONNECT,		/* no host */
	EP0_IDLE,
	EP0_IN_DATA_PHASE,
	EP0_OUT_DATA_PHASE,
	EP0_STATUS,
	EP0_STALL,
} ep0state_e;

extern int dwc_common_irq(void);
#endif
