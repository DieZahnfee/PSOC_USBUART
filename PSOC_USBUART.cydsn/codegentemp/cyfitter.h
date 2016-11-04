#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* DMA_1 */
#define DMA_1__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define DMA_1__DRQ_NUMBER 0u
#define DMA_1__NUMBEROF_TDS 0u
#define DMA_1__PRIORITY 2u
#define DMA_1__TERMIN_EN 0u
#define DMA_1__TERMIN_SEL 0u
#define DMA_1__TERMOUT0_EN 0u
#define DMA_1__TERMOUT0_SEL 0u
#define DMA_1__TERMOUT1_EN 0u
#define DMA_1__TERMOUT1_SEL 0u

/* IDAC8_viDAC8 */
#define IDAC8_viDAC8__CR0 CYREG_DAC0_CR0
#define IDAC8_viDAC8__CR1 CYREG_DAC0_CR1
#define IDAC8_viDAC8__D CYREG_DAC0_D
#define IDAC8_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define IDAC8_viDAC8__PM_ACT_MSK 0x01u
#define IDAC8_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define IDAC8_viDAC8__PM_STBY_MSK 0x01u
#define IDAC8_viDAC8__STROBE CYREG_DAC0_STROBE
#define IDAC8_viDAC8__SW0 CYREG_DAC0_SW0
#define IDAC8_viDAC8__SW2 CYREG_DAC0_SW2
#define IDAC8_viDAC8__SW3 CYREG_DAC0_SW3
#define IDAC8_viDAC8__SW4 CYREG_DAC0_SW4
#define IDAC8_viDAC8__TR CYREG_DAC0_TR
#define IDAC8_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC0_M1
#define IDAC8_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC0_M2
#define IDAC8_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC0_M3
#define IDAC8_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC0_M4
#define IDAC8_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC0_M5
#define IDAC8_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC0_M6
#define IDAC8_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC0_M7
#define IDAC8_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC0_M8
#define IDAC8_viDAC8__TST CYREG_DAC0_TST

/* OPAMP_ABuf */
#define OPAMP_ABuf__CR CYREG_OPAMP2_CR
#define OPAMP_ABuf__MX CYREG_OPAMP2_MX
#define OPAMP_ABuf__NPUMP_OPAMP_TR0 CYREG_NPUMP_OPAMP_TR0
#define OPAMP_ABuf__PM_ACT_CFG CYREG_PM_ACT_CFG4
#define OPAMP_ABuf__PM_ACT_MSK 0x04u
#define OPAMP_ABuf__PM_STBY_CFG CYREG_PM_STBY_CFG4
#define OPAMP_ABuf__PM_STBY_MSK 0x04u
#define OPAMP_ABuf__RSVD CYREG_OPAMP2_RSVD
#define OPAMP_ABuf__SW CYREG_OPAMP2_SW
#define OPAMP_ABuf__TR0 CYREG_OPAMP2_TR0
#define OPAMP_ABuf__TR1 CYREG_OPAMP2_TR1

/* Filter_DFB */
#define Filter_DFB__ACU_SRAM_DATA CYREG_DFB0_ACU_SRAM_DATA_MBASE
#define Filter_DFB__COHER CYREG_DFB0_COHER
#define Filter_DFB__CR CYREG_DFB0_CR
#define Filter_DFB__CSA_SRAM_DATA CYREG_DFB0_CSA_SRAM_DATA_MBASE
#define Filter_DFB__CSB_SRAM_DATA CYREG_DFB0_CSB_SRAM_DATA_MBASE
#define Filter_DFB__DALIGN CYREG_DFB0_DALIGN
#define Filter_DFB__DMA_CTRL CYREG_DFB0_DMA_CTRL
#define Filter_DFB__DPA_SRAM_DATA CYREG_DFB0_DPA_SRAM_DATA_MBASE
#define Filter_DFB__DPB_SRAM_DATA CYREG_DFB0_DPB_SRAM_DATA_MBASE
#define Filter_DFB__DSI_CTRL CYREG_DFB0_DSI_CTRL
#define Filter_DFB__FSM_SRAM_DATA CYREG_DFB0_FSM_SRAM_DATA_MBASE
#define Filter_DFB__HOLDA CYREG_DFB0_HOLDA
#define Filter_DFB__HOLDAH CYREG_DFB0_HOLDAH
#define Filter_DFB__HOLDAM CYREG_DFB0_HOLDAM
#define Filter_DFB__HOLDAS CYREG_DFB0_HOLDAS
#define Filter_DFB__HOLDB CYREG_DFB0_HOLDB
#define Filter_DFB__HOLDBH CYREG_DFB0_HOLDBH
#define Filter_DFB__HOLDBM CYREG_DFB0_HOLDBM
#define Filter_DFB__HOLDBS CYREG_DFB0_HOLDBS
#define Filter_DFB__INT_CTRL CYREG_DFB0_INT_CTRL
#define Filter_DFB__PM_ACT_CFG CYREG_PM_ACT_CFG6
#define Filter_DFB__PM_ACT_MSK 0x10u
#define Filter_DFB__PM_STBY_CFG CYREG_PM_STBY_CFG6
#define Filter_DFB__PM_STBY_MSK 0x10u
#define Filter_DFB__RAM_DIR CYREG_DFB0_RAM_DIR
#define Filter_DFB__RAM_EN CYREG_DFB0_RAM_EN
#define Filter_DFB__SEMA CYREG_DFB0_SEMA
#define Filter_DFB__SR CYREG_DFB0_SR
#define Filter_DFB__STAGEA CYREG_DFB0_STAGEA
#define Filter_DFB__STAGEAH CYREG_DFB0_STAGEAH
#define Filter_DFB__STAGEAM CYREG_DFB0_STAGEAM
#define Filter_DFB__STAGEB CYREG_DFB0_STAGEB
#define Filter_DFB__STAGEBH CYREG_DFB0_STAGEBH
#define Filter_DFB__STAGEBM CYREG_DFB0_STAGEBM

/* USBUART_arb_int */
#define USBUART_arb_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_arb_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_arb_int__INTC_MASK 0x400000u
#define USBUART_arb_int__INTC_NUMBER 22u
#define USBUART_arb_int__INTC_PRIOR_NUM 7u
#define USBUART_arb_int__INTC_PRIOR_REG CYREG_NVIC_PRI_22
#define USBUART_arb_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_arb_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_bus_reset */
#define USBUART_bus_reset__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_bus_reset__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_bus_reset__INTC_MASK 0x800000u
#define USBUART_bus_reset__INTC_NUMBER 23u
#define USBUART_bus_reset__INTC_PRIOR_NUM 7u
#define USBUART_bus_reset__INTC_PRIOR_REG CYREG_NVIC_PRI_23
#define USBUART_bus_reset__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_bus_reset__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_Dm */
#define USBUART_Dm__0__INTTYPE CYREG_PICU15_INTTYPE7
#define USBUART_Dm__0__MASK 0x80u
#define USBUART_Dm__0__PC CYREG_IO_PC_PRT15_7_6_PC1
#define USBUART_Dm__0__PORT 15u
#define USBUART_Dm__0__SHIFT 7u
#define USBUART_Dm__AG CYREG_PRT15_AG
#define USBUART_Dm__AMUX CYREG_PRT15_AMUX
#define USBUART_Dm__BIE CYREG_PRT15_BIE
#define USBUART_Dm__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_Dm__BYP CYREG_PRT15_BYP
#define USBUART_Dm__CTL CYREG_PRT15_CTL
#define USBUART_Dm__DM0 CYREG_PRT15_DM0
#define USBUART_Dm__DM1 CYREG_PRT15_DM1
#define USBUART_Dm__DM2 CYREG_PRT15_DM2
#define USBUART_Dm__DR CYREG_PRT15_DR
#define USBUART_Dm__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_Dm__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_Dm__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_Dm__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_Dm__MASK 0x80u
#define USBUART_Dm__PORT 15u
#define USBUART_Dm__PRT CYREG_PRT15_PRT
#define USBUART_Dm__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_Dm__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_Dm__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_Dm__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_Dm__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_Dm__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_Dm__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_Dm__PS CYREG_PRT15_PS
#define USBUART_Dm__SHIFT 7u
#define USBUART_Dm__SLW CYREG_PRT15_SLW

/* USBUART_Dp */
#define USBUART_Dp__0__INTTYPE CYREG_PICU15_INTTYPE6
#define USBUART_Dp__0__MASK 0x40u
#define USBUART_Dp__0__PC CYREG_IO_PC_PRT15_7_6_PC0
#define USBUART_Dp__0__PORT 15u
#define USBUART_Dp__0__SHIFT 6u
#define USBUART_Dp__AG CYREG_PRT15_AG
#define USBUART_Dp__AMUX CYREG_PRT15_AMUX
#define USBUART_Dp__BIE CYREG_PRT15_BIE
#define USBUART_Dp__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_Dp__BYP CYREG_PRT15_BYP
#define USBUART_Dp__CTL CYREG_PRT15_CTL
#define USBUART_Dp__DM0 CYREG_PRT15_DM0
#define USBUART_Dp__DM1 CYREG_PRT15_DM1
#define USBUART_Dp__DM2 CYREG_PRT15_DM2
#define USBUART_Dp__DR CYREG_PRT15_DR
#define USBUART_Dp__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_Dp__INTSTAT CYREG_PICU15_INTSTAT
#define USBUART_Dp__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_Dp__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_Dp__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_Dp__MASK 0x40u
#define USBUART_Dp__PORT 15u
#define USBUART_Dp__PRT CYREG_PRT15_PRT
#define USBUART_Dp__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_Dp__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_Dp__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_Dp__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_Dp__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_Dp__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_Dp__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_Dp__PS CYREG_PRT15_PS
#define USBUART_Dp__SHIFT 6u
#define USBUART_Dp__SLW CYREG_PRT15_SLW
#define USBUART_Dp__SNAP CYREG_PICU_15_SNAP_15

/* USBUART_dp_int */
#define USBUART_dp_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_dp_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_dp_int__INTC_MASK 0x1000u
#define USBUART_dp_int__INTC_NUMBER 12u
#define USBUART_dp_int__INTC_PRIOR_NUM 7u
#define USBUART_dp_int__INTC_PRIOR_REG CYREG_NVIC_PRI_12
#define USBUART_dp_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_dp_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_ep_0 */
#define USBUART_ep_0__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_0__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_0__INTC_MASK 0x1000000u
#define USBUART_ep_0__INTC_NUMBER 24u
#define USBUART_ep_0__INTC_PRIOR_NUM 7u
#define USBUART_ep_0__INTC_PRIOR_REG CYREG_NVIC_PRI_24
#define USBUART_ep_0__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_0__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_ep_1 */
#define USBUART_ep_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_1__INTC_MASK 0x01u
#define USBUART_ep_1__INTC_NUMBER 0u
#define USBUART_ep_1__INTC_PRIOR_NUM 7u
#define USBUART_ep_1__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define USBUART_ep_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_ep_2 */
#define USBUART_ep_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_2__INTC_MASK 0x02u
#define USBUART_ep_2__INTC_NUMBER 1u
#define USBUART_ep_2__INTC_PRIOR_NUM 7u
#define USBUART_ep_2__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define USBUART_ep_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_ep_3 */
#define USBUART_ep_3__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_3__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_3__INTC_MASK 0x04u
#define USBUART_ep_3__INTC_NUMBER 2u
#define USBUART_ep_3__INTC_PRIOR_NUM 7u
#define USBUART_ep_3__INTC_PRIOR_REG CYREG_NVIC_PRI_2
#define USBUART_ep_3__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_3__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_sof_int */
#define USBUART_sof_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_sof_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_sof_int__INTC_MASK 0x200000u
#define USBUART_sof_int__INTC_NUMBER 21u
#define USBUART_sof_int__INTC_PRIOR_NUM 7u
#define USBUART_sof_int__INTC_PRIOR_REG CYREG_NVIC_PRI_21
#define USBUART_sof_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_sof_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBUART_USB */
#define USBUART_USB__ARB_CFG CYREG_USB_ARB_CFG
#define USBUART_USB__ARB_EP1_CFG CYREG_USB_ARB_EP1_CFG
#define USBUART_USB__ARB_EP1_INT_EN CYREG_USB_ARB_EP1_INT_EN
#define USBUART_USB__ARB_EP1_SR CYREG_USB_ARB_EP1_SR
#define USBUART_USB__ARB_EP2_CFG CYREG_USB_ARB_EP2_CFG
#define USBUART_USB__ARB_EP2_INT_EN CYREG_USB_ARB_EP2_INT_EN
#define USBUART_USB__ARB_EP2_SR CYREG_USB_ARB_EP2_SR
#define USBUART_USB__ARB_EP3_CFG CYREG_USB_ARB_EP3_CFG
#define USBUART_USB__ARB_EP3_INT_EN CYREG_USB_ARB_EP3_INT_EN
#define USBUART_USB__ARB_EP3_SR CYREG_USB_ARB_EP3_SR
#define USBUART_USB__ARB_EP4_CFG CYREG_USB_ARB_EP4_CFG
#define USBUART_USB__ARB_EP4_INT_EN CYREG_USB_ARB_EP4_INT_EN
#define USBUART_USB__ARB_EP4_SR CYREG_USB_ARB_EP4_SR
#define USBUART_USB__ARB_EP5_CFG CYREG_USB_ARB_EP5_CFG
#define USBUART_USB__ARB_EP5_INT_EN CYREG_USB_ARB_EP5_INT_EN
#define USBUART_USB__ARB_EP5_SR CYREG_USB_ARB_EP5_SR
#define USBUART_USB__ARB_EP6_CFG CYREG_USB_ARB_EP6_CFG
#define USBUART_USB__ARB_EP6_INT_EN CYREG_USB_ARB_EP6_INT_EN
#define USBUART_USB__ARB_EP6_SR CYREG_USB_ARB_EP6_SR
#define USBUART_USB__ARB_EP7_CFG CYREG_USB_ARB_EP7_CFG
#define USBUART_USB__ARB_EP7_INT_EN CYREG_USB_ARB_EP7_INT_EN
#define USBUART_USB__ARB_EP7_SR CYREG_USB_ARB_EP7_SR
#define USBUART_USB__ARB_EP8_CFG CYREG_USB_ARB_EP8_CFG
#define USBUART_USB__ARB_EP8_INT_EN CYREG_USB_ARB_EP8_INT_EN
#define USBUART_USB__ARB_EP8_SR CYREG_USB_ARB_EP8_SR
#define USBUART_USB__ARB_INT_EN CYREG_USB_ARB_INT_EN
#define USBUART_USB__ARB_INT_SR CYREG_USB_ARB_INT_SR
#define USBUART_USB__ARB_RW1_DR CYREG_USB_ARB_RW1_DR
#define USBUART_USB__ARB_RW1_RA CYREG_USB_ARB_RW1_RA
#define USBUART_USB__ARB_RW1_RA_MSB CYREG_USB_ARB_RW1_RA_MSB
#define USBUART_USB__ARB_RW1_WA CYREG_USB_ARB_RW1_WA
#define USBUART_USB__ARB_RW1_WA_MSB CYREG_USB_ARB_RW1_WA_MSB
#define USBUART_USB__ARB_RW2_DR CYREG_USB_ARB_RW2_DR
#define USBUART_USB__ARB_RW2_RA CYREG_USB_ARB_RW2_RA
#define USBUART_USB__ARB_RW2_RA_MSB CYREG_USB_ARB_RW2_RA_MSB
#define USBUART_USB__ARB_RW2_WA CYREG_USB_ARB_RW2_WA
#define USBUART_USB__ARB_RW2_WA_MSB CYREG_USB_ARB_RW2_WA_MSB
#define USBUART_USB__ARB_RW3_DR CYREG_USB_ARB_RW3_DR
#define USBUART_USB__ARB_RW3_RA CYREG_USB_ARB_RW3_RA
#define USBUART_USB__ARB_RW3_RA_MSB CYREG_USB_ARB_RW3_RA_MSB
#define USBUART_USB__ARB_RW3_WA CYREG_USB_ARB_RW3_WA
#define USBUART_USB__ARB_RW3_WA_MSB CYREG_USB_ARB_RW3_WA_MSB
#define USBUART_USB__ARB_RW4_DR CYREG_USB_ARB_RW4_DR
#define USBUART_USB__ARB_RW4_RA CYREG_USB_ARB_RW4_RA
#define USBUART_USB__ARB_RW4_RA_MSB CYREG_USB_ARB_RW4_RA_MSB
#define USBUART_USB__ARB_RW4_WA CYREG_USB_ARB_RW4_WA
#define USBUART_USB__ARB_RW4_WA_MSB CYREG_USB_ARB_RW4_WA_MSB
#define USBUART_USB__ARB_RW5_DR CYREG_USB_ARB_RW5_DR
#define USBUART_USB__ARB_RW5_RA CYREG_USB_ARB_RW5_RA
#define USBUART_USB__ARB_RW5_RA_MSB CYREG_USB_ARB_RW5_RA_MSB
#define USBUART_USB__ARB_RW5_WA CYREG_USB_ARB_RW5_WA
#define USBUART_USB__ARB_RW5_WA_MSB CYREG_USB_ARB_RW5_WA_MSB
#define USBUART_USB__ARB_RW6_DR CYREG_USB_ARB_RW6_DR
#define USBUART_USB__ARB_RW6_RA CYREG_USB_ARB_RW6_RA
#define USBUART_USB__ARB_RW6_RA_MSB CYREG_USB_ARB_RW6_RA_MSB
#define USBUART_USB__ARB_RW6_WA CYREG_USB_ARB_RW6_WA
#define USBUART_USB__ARB_RW6_WA_MSB CYREG_USB_ARB_RW6_WA_MSB
#define USBUART_USB__ARB_RW7_DR CYREG_USB_ARB_RW7_DR
#define USBUART_USB__ARB_RW7_RA CYREG_USB_ARB_RW7_RA
#define USBUART_USB__ARB_RW7_RA_MSB CYREG_USB_ARB_RW7_RA_MSB
#define USBUART_USB__ARB_RW7_WA CYREG_USB_ARB_RW7_WA
#define USBUART_USB__ARB_RW7_WA_MSB CYREG_USB_ARB_RW7_WA_MSB
#define USBUART_USB__ARB_RW8_DR CYREG_USB_ARB_RW8_DR
#define USBUART_USB__ARB_RW8_RA CYREG_USB_ARB_RW8_RA
#define USBUART_USB__ARB_RW8_RA_MSB CYREG_USB_ARB_RW8_RA_MSB
#define USBUART_USB__ARB_RW8_WA CYREG_USB_ARB_RW8_WA
#define USBUART_USB__ARB_RW8_WA_MSB CYREG_USB_ARB_RW8_WA_MSB
#define USBUART_USB__BUF_SIZE CYREG_USB_BUF_SIZE
#define USBUART_USB__BUS_RST_CNT CYREG_USB_BUS_RST_CNT
#define USBUART_USB__CR0 CYREG_USB_CR0
#define USBUART_USB__CR1 CYREG_USB_CR1
#define USBUART_USB__CWA CYREG_USB_CWA
#define USBUART_USB__CWA_MSB CYREG_USB_CWA_MSB
#define USBUART_USB__DMA_THRES CYREG_USB_DMA_THRES
#define USBUART_USB__DMA_THRES_MSB CYREG_USB_DMA_THRES_MSB
#define USBUART_USB__DYN_RECONFIG CYREG_USB_DYN_RECONFIG
#define USBUART_USB__EP_ACTIVE CYREG_USB_EP_ACTIVE
#define USBUART_USB__EP_TYPE CYREG_USB_EP_TYPE
#define USBUART_USB__EP0_CNT CYREG_USB_EP0_CNT
#define USBUART_USB__EP0_CR CYREG_USB_EP0_CR
#define USBUART_USB__EP0_DR0 CYREG_USB_EP0_DR0
#define USBUART_USB__EP0_DR1 CYREG_USB_EP0_DR1
#define USBUART_USB__EP0_DR2 CYREG_USB_EP0_DR2
#define USBUART_USB__EP0_DR3 CYREG_USB_EP0_DR3
#define USBUART_USB__EP0_DR4 CYREG_USB_EP0_DR4
#define USBUART_USB__EP0_DR5 CYREG_USB_EP0_DR5
#define USBUART_USB__EP0_DR6 CYREG_USB_EP0_DR6
#define USBUART_USB__EP0_DR7 CYREG_USB_EP0_DR7
#define USBUART_USB__MEM_DATA CYREG_USB_MEM_DATA_MBASE
#define USBUART_USB__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define USBUART_USB__PM_ACT_MSK 0x01u
#define USBUART_USB__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define USBUART_USB__PM_STBY_MSK 0x01u
#define USBUART_USB__SIE_EP_INT_EN CYREG_USB_SIE_EP_INT_EN
#define USBUART_USB__SIE_EP_INT_SR CYREG_USB_SIE_EP_INT_SR
#define USBUART_USB__SIE_EP1_CNT0 CYREG_USB_SIE_EP1_CNT0
#define USBUART_USB__SIE_EP1_CNT1 CYREG_USB_SIE_EP1_CNT1
#define USBUART_USB__SIE_EP1_CR0 CYREG_USB_SIE_EP1_CR0
#define USBUART_USB__SIE_EP2_CNT0 CYREG_USB_SIE_EP2_CNT0
#define USBUART_USB__SIE_EP2_CNT1 CYREG_USB_SIE_EP2_CNT1
#define USBUART_USB__SIE_EP2_CR0 CYREG_USB_SIE_EP2_CR0
#define USBUART_USB__SIE_EP3_CNT0 CYREG_USB_SIE_EP3_CNT0
#define USBUART_USB__SIE_EP3_CNT1 CYREG_USB_SIE_EP3_CNT1
#define USBUART_USB__SIE_EP3_CR0 CYREG_USB_SIE_EP3_CR0
#define USBUART_USB__SIE_EP4_CNT0 CYREG_USB_SIE_EP4_CNT0
#define USBUART_USB__SIE_EP4_CNT1 CYREG_USB_SIE_EP4_CNT1
#define USBUART_USB__SIE_EP4_CR0 CYREG_USB_SIE_EP4_CR0
#define USBUART_USB__SIE_EP5_CNT0 CYREG_USB_SIE_EP5_CNT0
#define USBUART_USB__SIE_EP5_CNT1 CYREG_USB_SIE_EP5_CNT1
#define USBUART_USB__SIE_EP5_CR0 CYREG_USB_SIE_EP5_CR0
#define USBUART_USB__SIE_EP6_CNT0 CYREG_USB_SIE_EP6_CNT0
#define USBUART_USB__SIE_EP6_CNT1 CYREG_USB_SIE_EP6_CNT1
#define USBUART_USB__SIE_EP6_CR0 CYREG_USB_SIE_EP6_CR0
#define USBUART_USB__SIE_EP7_CNT0 CYREG_USB_SIE_EP7_CNT0
#define USBUART_USB__SIE_EP7_CNT1 CYREG_USB_SIE_EP7_CNT1
#define USBUART_USB__SIE_EP7_CR0 CYREG_USB_SIE_EP7_CR0
#define USBUART_USB__SIE_EP8_CNT0 CYREG_USB_SIE_EP8_CNT0
#define USBUART_USB__SIE_EP8_CNT1 CYREG_USB_SIE_EP8_CNT1
#define USBUART_USB__SIE_EP8_CR0 CYREG_USB_SIE_EP8_CR0
#define USBUART_USB__SOF0 CYREG_USB_SOF0
#define USBUART_USB__SOF1 CYREG_USB_SOF1
#define USBUART_USB__USB_CLK_EN CYREG_USB_USB_CLK_EN
#define USBUART_USB__USBIO_CR0 CYREG_USB_USBIO_CR0
#define USBUART_USB__USBIO_CR1 CYREG_USB_USBIO_CR1

/* Vref_sink */
#define Vref_sink__0__INTTYPE CYREG_PICU0_INTTYPE3
#define Vref_sink__0__MASK 0x08u
#define Vref_sink__0__PC CYREG_PRT0_PC3
#define Vref_sink__0__PORT 0u
#define Vref_sink__0__SHIFT 3u
#define Vref_sink__AG CYREG_PRT0_AG
#define Vref_sink__AMUX CYREG_PRT0_AMUX
#define Vref_sink__BIE CYREG_PRT0_BIE
#define Vref_sink__BIT_MASK CYREG_PRT0_BIT_MASK
#define Vref_sink__BYP CYREG_PRT0_BYP
#define Vref_sink__CTL CYREG_PRT0_CTL
#define Vref_sink__DM0 CYREG_PRT0_DM0
#define Vref_sink__DM1 CYREG_PRT0_DM1
#define Vref_sink__DM2 CYREG_PRT0_DM2
#define Vref_sink__DR CYREG_PRT0_DR
#define Vref_sink__INP_DIS CYREG_PRT0_INP_DIS
#define Vref_sink__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Vref_sink__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Vref_sink__LCD_EN CYREG_PRT0_LCD_EN
#define Vref_sink__MASK 0x08u
#define Vref_sink__PORT 0u
#define Vref_sink__PRT CYREG_PRT0_PRT
#define Vref_sink__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Vref_sink__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Vref_sink__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Vref_sink__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Vref_sink__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Vref_sink__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Vref_sink__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Vref_sink__PS CYREG_PRT0_PS
#define Vref_sink__SHIFT 3u
#define Vref_sink__SLW CYREG_PRT0_SLW

/* ADC_DelSig_DEC */
#define ADC_DelSig_DEC__COHER CYREG_DEC_COHER
#define ADC_DelSig_DEC__CR CYREG_DEC_CR
#define ADC_DelSig_DEC__DR1 CYREG_DEC_DR1
#define ADC_DelSig_DEC__DR2 CYREG_DEC_DR2
#define ADC_DelSig_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DelSig_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DelSig_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DelSig_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DelSig_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DelSig_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DelSig_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DelSig_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DelSig_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DelSig_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DelSig_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DelSig_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DelSig_DEC__PM_ACT_MSK 0x01u
#define ADC_DelSig_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DelSig_DEC__PM_STBY_MSK 0x01u
#define ADC_DelSig_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DelSig_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DelSig_DEC__SR CYREG_DEC_SR
#define ADC_DelSig_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DelSig_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DelSig_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DelSig_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DelSig_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DelSig_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DelSig_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DelSig_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DelSig_DSM */
#define ADC_DelSig_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DelSig_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DelSig_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DelSig_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DelSig_DSM__CLK CYREG_DSM0_CLK
#define ADC_DelSig_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DelSig_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DelSig_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DelSig_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DelSig_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DelSig_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DelSig_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DelSig_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DelSig_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DelSig_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DelSig_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DelSig_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DelSig_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DelSig_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DelSig_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DelSig_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DelSig_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DelSig_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DelSig_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DelSig_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DelSig_DSM__MISC CYREG_DSM0_MISC
#define ADC_DelSig_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DelSig_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DelSig_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DelSig_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DelSig_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DelSig_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DelSig_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DelSig_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DelSig_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DelSig_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DelSig_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DelSig_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DelSig_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DelSig_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DelSig_DSM__TST1 CYREG_DSM0_TST1

/* ADC_DelSig_Ext_CP_Clk */
#define ADC_DelSig_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_DelSig_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_DelSig_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_DelSig_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_Ext_CP_Clk__INDEX 0x00u
#define ADC_DelSig_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_DelSig_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_DelSig_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_DelSig_Ext_CP_Clk__PM_STBY_MSK 0x01u

/* ADC_DelSig_IRQ */
#define ADC_DelSig_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_DelSig_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_DelSig_IRQ__INTC_MASK 0x20000000u
#define ADC_DelSig_IRQ__INTC_NUMBER 29u
#define ADC_DelSig_IRQ__INTC_PRIOR_NUM 7u
#define ADC_DelSig_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_DelSig_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_DelSig_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_DelSig_theACLK */
#define ADC_DelSig_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_DelSig_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_DelSig_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_DelSig_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_DelSig_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_DelSig_theACLK__INDEX 0x00u
#define ADC_DelSig_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_DelSig_theACLK__PM_ACT_MSK 0x01u
#define ADC_DelSig_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_DelSig_theACLK__PM_STBY_MSK 0x01u

/* Vref_source */
#define Vref_source__0__INTTYPE CYREG_PICU0_INTTYPE0
#define Vref_source__0__MASK 0x01u
#define Vref_source__0__PC CYREG_PRT0_PC0
#define Vref_source__0__PORT 0u
#define Vref_source__0__SHIFT 0u
#define Vref_source__AG CYREG_PRT0_AG
#define Vref_source__AMUX CYREG_PRT0_AMUX
#define Vref_source__BIE CYREG_PRT0_BIE
#define Vref_source__BIT_MASK CYREG_PRT0_BIT_MASK
#define Vref_source__BYP CYREG_PRT0_BYP
#define Vref_source__CTL CYREG_PRT0_CTL
#define Vref_source__DM0 CYREG_PRT0_DM0
#define Vref_source__DM1 CYREG_PRT0_DM1
#define Vref_source__DM2 CYREG_PRT0_DM2
#define Vref_source__DR CYREG_PRT0_DR
#define Vref_source__INP_DIS CYREG_PRT0_INP_DIS
#define Vref_source__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Vref_source__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Vref_source__LCD_EN CYREG_PRT0_LCD_EN
#define Vref_source__MASK 0x01u
#define Vref_source__PORT 0u
#define Vref_source__PRT CYREG_PRT0_PRT
#define Vref_source__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Vref_source__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Vref_source__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Vref_source__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Vref_source__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Vref_source__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Vref_source__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Vref_source__PS CYREG_PRT0_PS
#define Vref_source__SHIFT 0u
#define Vref_source__SLW CYREG_PRT0_SLW

/* Analog_In_Neg */
#define Analog_In_Neg__0__INTTYPE CYREG_PICU0_INTTYPE2
#define Analog_In_Neg__0__MASK 0x04u
#define Analog_In_Neg__0__PC CYREG_PRT0_PC2
#define Analog_In_Neg__0__PORT 0u
#define Analog_In_Neg__0__SHIFT 2u
#define Analog_In_Neg__AG CYREG_PRT0_AG
#define Analog_In_Neg__AMUX CYREG_PRT0_AMUX
#define Analog_In_Neg__BIE CYREG_PRT0_BIE
#define Analog_In_Neg__BIT_MASK CYREG_PRT0_BIT_MASK
#define Analog_In_Neg__BYP CYREG_PRT0_BYP
#define Analog_In_Neg__CTL CYREG_PRT0_CTL
#define Analog_In_Neg__DM0 CYREG_PRT0_DM0
#define Analog_In_Neg__DM1 CYREG_PRT0_DM1
#define Analog_In_Neg__DM2 CYREG_PRT0_DM2
#define Analog_In_Neg__DR CYREG_PRT0_DR
#define Analog_In_Neg__INP_DIS CYREG_PRT0_INP_DIS
#define Analog_In_Neg__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Analog_In_Neg__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Analog_In_Neg__LCD_EN CYREG_PRT0_LCD_EN
#define Analog_In_Neg__MASK 0x04u
#define Analog_In_Neg__PORT 0u
#define Analog_In_Neg__PRT CYREG_PRT0_PRT
#define Analog_In_Neg__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Analog_In_Neg__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Analog_In_Neg__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Analog_In_Neg__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Analog_In_Neg__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Analog_In_Neg__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Analog_In_Neg__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Analog_In_Neg__PS CYREG_PRT0_PS
#define Analog_In_Neg__SHIFT 2u
#define Analog_In_Neg__SLW CYREG_PRT0_SLW

/* Analog_In_Pos */
#define Analog_In_Pos__0__INTTYPE CYREG_PICU0_INTTYPE1
#define Analog_In_Pos__0__MASK 0x02u
#define Analog_In_Pos__0__PC CYREG_PRT0_PC1
#define Analog_In_Pos__0__PORT 0u
#define Analog_In_Pos__0__SHIFT 1u
#define Analog_In_Pos__AG CYREG_PRT0_AG
#define Analog_In_Pos__AMUX CYREG_PRT0_AMUX
#define Analog_In_Pos__BIE CYREG_PRT0_BIE
#define Analog_In_Pos__BIT_MASK CYREG_PRT0_BIT_MASK
#define Analog_In_Pos__BYP CYREG_PRT0_BYP
#define Analog_In_Pos__CTL CYREG_PRT0_CTL
#define Analog_In_Pos__DM0 CYREG_PRT0_DM0
#define Analog_In_Pos__DM1 CYREG_PRT0_DM1
#define Analog_In_Pos__DM2 CYREG_PRT0_DM2
#define Analog_In_Pos__DR CYREG_PRT0_DR
#define Analog_In_Pos__INP_DIS CYREG_PRT0_INP_DIS
#define Analog_In_Pos__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Analog_In_Pos__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Analog_In_Pos__LCD_EN CYREG_PRT0_LCD_EN
#define Analog_In_Pos__MASK 0x02u
#define Analog_In_Pos__PORT 0u
#define Analog_In_Pos__PRT CYREG_PRT0_PRT
#define Analog_In_Pos__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Analog_In_Pos__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Analog_In_Pos__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Analog_In_Pos__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Analog_In_Pos__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Analog_In_Pos__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Analog_In_Pos__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Analog_In_Pos__PS CYREG_PRT0_PS
#define Analog_In_Pos__SHIFT 1u
#define Analog_In_Pos__SLW CYREG_PRT0_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 48000000U
#define BCLK__BUS_CLK__KHZ 48000U
#define BCLK__BUS_CLK__MHZ 48U
#define CY_PROJECT_NAME "PSOC_USBUART"
#define CY_VERSION "PSoC Creator  4.0"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP 
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000001u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
