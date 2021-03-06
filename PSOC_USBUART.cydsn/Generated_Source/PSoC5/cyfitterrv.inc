    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; DMA
DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL2
DMA__DRQ_NUMBER EQU 10
DMA__NUMBEROF_TDS EQU 0
DMA__PRIORITY EQU 2
DMA__TERMIN_EN EQU 0
DMA__TERMIN_SEL EQU 0
DMA__TERMOUT0_EN EQU 0
DMA__TERMOUT0_SEL EQU 0
DMA__TERMOUT1_EN EQU 0
DMA__TERMOUT1_SEL EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000400

; IDAC8_viDAC8
IDAC8_viDAC8__CR0 EQU CYREG_DAC0_CR0
IDAC8_viDAC8__CR1 EQU CYREG_DAC0_CR1
IDAC8_viDAC8__D EQU CYREG_DAC0_D
IDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
IDAC8_viDAC8__PM_ACT_MSK EQU 0x01
IDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
IDAC8_viDAC8__PM_STBY_MSK EQU 0x01
IDAC8_viDAC8__STROBE EQU CYREG_DAC0_STROBE
IDAC8_viDAC8__SW0 EQU CYREG_DAC0_SW0
IDAC8_viDAC8__SW2 EQU CYREG_DAC0_SW2
IDAC8_viDAC8__SW3 EQU CYREG_DAC0_SW3
IDAC8_viDAC8__SW4 EQU CYREG_DAC0_SW4
IDAC8_viDAC8__TR EQU CYREG_DAC0_TR
IDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M1
IDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M2
IDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M3
IDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M4
IDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M5
IDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M6
IDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M7
IDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M8
IDAC8_viDAC8__TST EQU CYREG_DAC0_TST

; OPAMP_ABuf
OPAMP_ABuf__CR EQU CYREG_OPAMP2_CR
OPAMP_ABuf__MX EQU CYREG_OPAMP2_MX
OPAMP_ABuf__NPUMP_OPAMP_TR0 EQU CYREG_NPUMP_OPAMP_TR0
OPAMP_ABuf__PM_ACT_CFG EQU CYREG_PM_ACT_CFG4
OPAMP_ABuf__PM_ACT_MSK EQU 0x04
OPAMP_ABuf__PM_STBY_CFG EQU CYREG_PM_STBY_CFG4
OPAMP_ABuf__PM_STBY_MSK EQU 0x04
OPAMP_ABuf__RSVD EQU CYREG_OPAMP2_RSVD
OPAMP_ABuf__SW EQU CYREG_OPAMP2_SW
OPAMP_ABuf__TR0 EQU CYREG_OPAMP2_TR0
OPAMP_ABuf__TR1 EQU CYREG_OPAMP2_TR1

; Filter_DFB
Filter_DFB__ACU_SRAM_DATA EQU CYREG_DFB0_ACU_SRAM_DATA_MBASE
Filter_DFB__COHER EQU CYREG_DFB0_COHER
Filter_DFB__CR EQU CYREG_DFB0_CR
Filter_DFB__CSA_SRAM_DATA EQU CYREG_DFB0_CSA_SRAM_DATA_MBASE
Filter_DFB__CSB_SRAM_DATA EQU CYREG_DFB0_CSB_SRAM_DATA_MBASE
Filter_DFB__DALIGN EQU CYREG_DFB0_DALIGN
Filter_DFB__DMA_CTRL EQU CYREG_DFB0_DMA_CTRL
Filter_DFB__DPA_SRAM_DATA EQU CYREG_DFB0_DPA_SRAM_DATA_MBASE
Filter_DFB__DPB_SRAM_DATA EQU CYREG_DFB0_DPB_SRAM_DATA_MBASE
Filter_DFB__DSI_CTRL EQU CYREG_DFB0_DSI_CTRL
Filter_DFB__FSM_SRAM_DATA EQU CYREG_DFB0_FSM_SRAM_DATA_MBASE
Filter_DFB__HOLDA EQU CYREG_DFB0_HOLDA
Filter_DFB__HOLDAH EQU CYREG_DFB0_HOLDAH
Filter_DFB__HOLDAM EQU CYREG_DFB0_HOLDAM
Filter_DFB__HOLDAS EQU CYREG_DFB0_HOLDAS
Filter_DFB__HOLDB EQU CYREG_DFB0_HOLDB
Filter_DFB__HOLDBH EQU CYREG_DFB0_HOLDBH
Filter_DFB__HOLDBM EQU CYREG_DFB0_HOLDBM
Filter_DFB__HOLDBS EQU CYREG_DFB0_HOLDBS
Filter_DFB__INT_CTRL EQU CYREG_DFB0_INT_CTRL
Filter_DFB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG6
Filter_DFB__PM_ACT_MSK EQU 0x10
Filter_DFB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG6
Filter_DFB__PM_STBY_MSK EQU 0x10
Filter_DFB__RAM_DIR EQU CYREG_DFB0_RAM_DIR
Filter_DFB__RAM_EN EQU CYREG_DFB0_RAM_EN
Filter_DFB__SEMA EQU CYREG_DFB0_SEMA
Filter_DFB__SR EQU CYREG_DFB0_SR
Filter_DFB__STAGEA EQU CYREG_DFB0_STAGEA
Filter_DFB__STAGEAH EQU CYREG_DFB0_STAGEAH
Filter_DFB__STAGEAM EQU CYREG_DFB0_STAGEAM
Filter_DFB__STAGEB EQU CYREG_DFB0_STAGEB
Filter_DFB__STAGEBH EQU CYREG_DFB0_STAGEBH
Filter_DFB__STAGEBM EQU CYREG_DFB0_STAGEBM

; Filter_done
Filter_done__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
Filter_done__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
Filter_done__INTC_MASK EQU 0x10000000
Filter_done__INTC_NUMBER EQU 28
Filter_done__INTC_PRIOR_NUM EQU 7
Filter_done__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_28
Filter_done__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
Filter_done__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_arb_int
USBUART_arb_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_arb_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_arb_int__INTC_MASK EQU 0x400000
USBUART_arb_int__INTC_NUMBER EQU 22
USBUART_arb_int__INTC_PRIOR_NUM EQU 7
USBUART_arb_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_22
USBUART_arb_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_arb_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_bus_reset
USBUART_bus_reset__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_bus_reset__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_bus_reset__INTC_MASK EQU 0x800000
USBUART_bus_reset__INTC_NUMBER EQU 23
USBUART_bus_reset__INTC_PRIOR_NUM EQU 7
USBUART_bus_reset__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_23
USBUART_bus_reset__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_bus_reset__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_Dm
USBUART_Dm__0__INTTYPE EQU CYREG_PICU15_INTTYPE7
USBUART_Dm__0__MASK EQU 0x80
USBUART_Dm__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC1
USBUART_Dm__0__PORT EQU 15
USBUART_Dm__0__SHIFT EQU 7
USBUART_Dm__AG EQU CYREG_PRT15_AG
USBUART_Dm__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dm__BIE EQU CYREG_PRT15_BIE
USBUART_Dm__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dm__BYP EQU CYREG_PRT15_BYP
USBUART_Dm__CTL EQU CYREG_PRT15_CTL
USBUART_Dm__DM0 EQU CYREG_PRT15_DM0
USBUART_Dm__DM1 EQU CYREG_PRT15_DM1
USBUART_Dm__DM2 EQU CYREG_PRT15_DM2
USBUART_Dm__DR EQU CYREG_PRT15_DR
USBUART_Dm__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dm__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_Dm__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dm__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dm__MASK EQU 0x80
USBUART_Dm__PORT EQU 15
USBUART_Dm__PRT EQU CYREG_PRT15_PRT
USBUART_Dm__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dm__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dm__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dm__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dm__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dm__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dm__PS EQU CYREG_PRT15_PS
USBUART_Dm__SHIFT EQU 7
USBUART_Dm__SLW EQU CYREG_PRT15_SLW

; USBUART_Dp
USBUART_Dp__0__INTTYPE EQU CYREG_PICU15_INTTYPE6
USBUART_Dp__0__MASK EQU 0x40
USBUART_Dp__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC0
USBUART_Dp__0__PORT EQU 15
USBUART_Dp__0__SHIFT EQU 6
USBUART_Dp__AG EQU CYREG_PRT15_AG
USBUART_Dp__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dp__BIE EQU CYREG_PRT15_BIE
USBUART_Dp__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dp__BYP EQU CYREG_PRT15_BYP
USBUART_Dp__CTL EQU CYREG_PRT15_CTL
USBUART_Dp__DM0 EQU CYREG_PRT15_DM0
USBUART_Dp__DM1 EQU CYREG_PRT15_DM1
USBUART_Dp__DM2 EQU CYREG_PRT15_DM2
USBUART_Dp__DR EQU CYREG_PRT15_DR
USBUART_Dp__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dp__INTSTAT EQU CYREG_PICU15_INTSTAT
USBUART_Dp__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_Dp__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dp__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dp__MASK EQU 0x40
USBUART_Dp__PORT EQU 15
USBUART_Dp__PRT EQU CYREG_PRT15_PRT
USBUART_Dp__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dp__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dp__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dp__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dp__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dp__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dp__PS EQU CYREG_PRT15_PS
USBUART_Dp__SHIFT EQU 6
USBUART_Dp__SLW EQU CYREG_PRT15_SLW
USBUART_Dp__SNAP EQU CYREG_PICU_15_SNAP_15

; USBUART_dp_int
USBUART_dp_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_dp_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_dp_int__INTC_MASK EQU 0x1000
USBUART_dp_int__INTC_NUMBER EQU 12
USBUART_dp_int__INTC_PRIOR_NUM EQU 7
USBUART_dp_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_12
USBUART_dp_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_dp_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_0
USBUART_ep_0__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_0__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_0__INTC_MASK EQU 0x1000000
USBUART_ep_0__INTC_NUMBER EQU 24
USBUART_ep_0__INTC_PRIOR_NUM EQU 7
USBUART_ep_0__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_24
USBUART_ep_0__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_0__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_1
USBUART_ep_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_1__INTC_MASK EQU 0x01
USBUART_ep_1__INTC_NUMBER EQU 0
USBUART_ep_1__INTC_PRIOR_NUM EQU 7
USBUART_ep_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
USBUART_ep_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_2
USBUART_ep_2__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_2__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_2__INTC_MASK EQU 0x02
USBUART_ep_2__INTC_NUMBER EQU 1
USBUART_ep_2__INTC_PRIOR_NUM EQU 7
USBUART_ep_2__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
USBUART_ep_2__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_2__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_ep_3
USBUART_ep_3__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_ep_3__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_ep_3__INTC_MASK EQU 0x04
USBUART_ep_3__INTC_NUMBER EQU 2
USBUART_ep_3__INTC_PRIOR_NUM EQU 7
USBUART_ep_3__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
USBUART_ep_3__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_ep_3__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_sof_int
USBUART_sof_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_sof_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_sof_int__INTC_MASK EQU 0x200000
USBUART_sof_int__INTC_NUMBER EQU 21
USBUART_sof_int__INTC_PRIOR_NUM EQU 7
USBUART_sof_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_21
USBUART_sof_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_sof_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; USBUART_USB
USBUART_USB__ARB_CFG EQU CYREG_USB_ARB_CFG
USBUART_USB__ARB_EP1_CFG EQU CYREG_USB_ARB_EP1_CFG
USBUART_USB__ARB_EP1_INT_EN EQU CYREG_USB_ARB_EP1_INT_EN
USBUART_USB__ARB_EP1_SR EQU CYREG_USB_ARB_EP1_SR
USBUART_USB__ARB_EP2_CFG EQU CYREG_USB_ARB_EP2_CFG
USBUART_USB__ARB_EP2_INT_EN EQU CYREG_USB_ARB_EP2_INT_EN
USBUART_USB__ARB_EP2_SR EQU CYREG_USB_ARB_EP2_SR
USBUART_USB__ARB_EP3_CFG EQU CYREG_USB_ARB_EP3_CFG
USBUART_USB__ARB_EP3_INT_EN EQU CYREG_USB_ARB_EP3_INT_EN
USBUART_USB__ARB_EP3_SR EQU CYREG_USB_ARB_EP3_SR
USBUART_USB__ARB_EP4_CFG EQU CYREG_USB_ARB_EP4_CFG
USBUART_USB__ARB_EP4_INT_EN EQU CYREG_USB_ARB_EP4_INT_EN
USBUART_USB__ARB_EP4_SR EQU CYREG_USB_ARB_EP4_SR
USBUART_USB__ARB_EP5_CFG EQU CYREG_USB_ARB_EP5_CFG
USBUART_USB__ARB_EP5_INT_EN EQU CYREG_USB_ARB_EP5_INT_EN
USBUART_USB__ARB_EP5_SR EQU CYREG_USB_ARB_EP5_SR
USBUART_USB__ARB_EP6_CFG EQU CYREG_USB_ARB_EP6_CFG
USBUART_USB__ARB_EP6_INT_EN EQU CYREG_USB_ARB_EP6_INT_EN
USBUART_USB__ARB_EP6_SR EQU CYREG_USB_ARB_EP6_SR
USBUART_USB__ARB_EP7_CFG EQU CYREG_USB_ARB_EP7_CFG
USBUART_USB__ARB_EP7_INT_EN EQU CYREG_USB_ARB_EP7_INT_EN
USBUART_USB__ARB_EP7_SR EQU CYREG_USB_ARB_EP7_SR
USBUART_USB__ARB_EP8_CFG EQU CYREG_USB_ARB_EP8_CFG
USBUART_USB__ARB_EP8_INT_EN EQU CYREG_USB_ARB_EP8_INT_EN
USBUART_USB__ARB_EP8_SR EQU CYREG_USB_ARB_EP8_SR
USBUART_USB__ARB_INT_EN EQU CYREG_USB_ARB_INT_EN
USBUART_USB__ARB_INT_SR EQU CYREG_USB_ARB_INT_SR
USBUART_USB__ARB_RW1_DR EQU CYREG_USB_ARB_RW1_DR
USBUART_USB__ARB_RW1_RA EQU CYREG_USB_ARB_RW1_RA
USBUART_USB__ARB_RW1_RA_MSB EQU CYREG_USB_ARB_RW1_RA_MSB
USBUART_USB__ARB_RW1_WA EQU CYREG_USB_ARB_RW1_WA
USBUART_USB__ARB_RW1_WA_MSB EQU CYREG_USB_ARB_RW1_WA_MSB
USBUART_USB__ARB_RW2_DR EQU CYREG_USB_ARB_RW2_DR
USBUART_USB__ARB_RW2_RA EQU CYREG_USB_ARB_RW2_RA
USBUART_USB__ARB_RW2_RA_MSB EQU CYREG_USB_ARB_RW2_RA_MSB
USBUART_USB__ARB_RW2_WA EQU CYREG_USB_ARB_RW2_WA
USBUART_USB__ARB_RW2_WA_MSB EQU CYREG_USB_ARB_RW2_WA_MSB
USBUART_USB__ARB_RW3_DR EQU CYREG_USB_ARB_RW3_DR
USBUART_USB__ARB_RW3_RA EQU CYREG_USB_ARB_RW3_RA
USBUART_USB__ARB_RW3_RA_MSB EQU CYREG_USB_ARB_RW3_RA_MSB
USBUART_USB__ARB_RW3_WA EQU CYREG_USB_ARB_RW3_WA
USBUART_USB__ARB_RW3_WA_MSB EQU CYREG_USB_ARB_RW3_WA_MSB
USBUART_USB__ARB_RW4_DR EQU CYREG_USB_ARB_RW4_DR
USBUART_USB__ARB_RW4_RA EQU CYREG_USB_ARB_RW4_RA
USBUART_USB__ARB_RW4_RA_MSB EQU CYREG_USB_ARB_RW4_RA_MSB
USBUART_USB__ARB_RW4_WA EQU CYREG_USB_ARB_RW4_WA
USBUART_USB__ARB_RW4_WA_MSB EQU CYREG_USB_ARB_RW4_WA_MSB
USBUART_USB__ARB_RW5_DR EQU CYREG_USB_ARB_RW5_DR
USBUART_USB__ARB_RW5_RA EQU CYREG_USB_ARB_RW5_RA
USBUART_USB__ARB_RW5_RA_MSB EQU CYREG_USB_ARB_RW5_RA_MSB
USBUART_USB__ARB_RW5_WA EQU CYREG_USB_ARB_RW5_WA
USBUART_USB__ARB_RW5_WA_MSB EQU CYREG_USB_ARB_RW5_WA_MSB
USBUART_USB__ARB_RW6_DR EQU CYREG_USB_ARB_RW6_DR
USBUART_USB__ARB_RW6_RA EQU CYREG_USB_ARB_RW6_RA
USBUART_USB__ARB_RW6_RA_MSB EQU CYREG_USB_ARB_RW6_RA_MSB
USBUART_USB__ARB_RW6_WA EQU CYREG_USB_ARB_RW6_WA
USBUART_USB__ARB_RW6_WA_MSB EQU CYREG_USB_ARB_RW6_WA_MSB
USBUART_USB__ARB_RW7_DR EQU CYREG_USB_ARB_RW7_DR
USBUART_USB__ARB_RW7_RA EQU CYREG_USB_ARB_RW7_RA
USBUART_USB__ARB_RW7_RA_MSB EQU CYREG_USB_ARB_RW7_RA_MSB
USBUART_USB__ARB_RW7_WA EQU CYREG_USB_ARB_RW7_WA
USBUART_USB__ARB_RW7_WA_MSB EQU CYREG_USB_ARB_RW7_WA_MSB
USBUART_USB__ARB_RW8_DR EQU CYREG_USB_ARB_RW8_DR
USBUART_USB__ARB_RW8_RA EQU CYREG_USB_ARB_RW8_RA
USBUART_USB__ARB_RW8_RA_MSB EQU CYREG_USB_ARB_RW8_RA_MSB
USBUART_USB__ARB_RW8_WA EQU CYREG_USB_ARB_RW8_WA
USBUART_USB__ARB_RW8_WA_MSB EQU CYREG_USB_ARB_RW8_WA_MSB
USBUART_USB__BUF_SIZE EQU CYREG_USB_BUF_SIZE
USBUART_USB__BUS_RST_CNT EQU CYREG_USB_BUS_RST_CNT
USBUART_USB__CR0 EQU CYREG_USB_CR0
USBUART_USB__CR1 EQU CYREG_USB_CR1
USBUART_USB__CWA EQU CYREG_USB_CWA
USBUART_USB__CWA_MSB EQU CYREG_USB_CWA_MSB
USBUART_USB__DMA_THRES EQU CYREG_USB_DMA_THRES
USBUART_USB__DMA_THRES_MSB EQU CYREG_USB_DMA_THRES_MSB
USBUART_USB__DYN_RECONFIG EQU CYREG_USB_DYN_RECONFIG
USBUART_USB__EP_ACTIVE EQU CYREG_USB_EP_ACTIVE
USBUART_USB__EP_TYPE EQU CYREG_USB_EP_TYPE
USBUART_USB__EP0_CNT EQU CYREG_USB_EP0_CNT
USBUART_USB__EP0_CR EQU CYREG_USB_EP0_CR
USBUART_USB__EP0_DR0 EQU CYREG_USB_EP0_DR0
USBUART_USB__EP0_DR1 EQU CYREG_USB_EP0_DR1
USBUART_USB__EP0_DR2 EQU CYREG_USB_EP0_DR2
USBUART_USB__EP0_DR3 EQU CYREG_USB_EP0_DR3
USBUART_USB__EP0_DR4 EQU CYREG_USB_EP0_DR4
USBUART_USB__EP0_DR5 EQU CYREG_USB_EP0_DR5
USBUART_USB__EP0_DR6 EQU CYREG_USB_EP0_DR6
USBUART_USB__EP0_DR7 EQU CYREG_USB_EP0_DR7
USBUART_USB__MEM_DATA EQU CYREG_USB_MEM_DATA_MBASE
USBUART_USB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
USBUART_USB__PM_ACT_MSK EQU 0x01
USBUART_USB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
USBUART_USB__PM_STBY_MSK EQU 0x01
USBUART_USB__SIE_EP_INT_EN EQU CYREG_USB_SIE_EP_INT_EN
USBUART_USB__SIE_EP_INT_SR EQU CYREG_USB_SIE_EP_INT_SR
USBUART_USB__SIE_EP1_CNT0 EQU CYREG_USB_SIE_EP1_CNT0
USBUART_USB__SIE_EP1_CNT1 EQU CYREG_USB_SIE_EP1_CNT1
USBUART_USB__SIE_EP1_CR0 EQU CYREG_USB_SIE_EP1_CR0
USBUART_USB__SIE_EP2_CNT0 EQU CYREG_USB_SIE_EP2_CNT0
USBUART_USB__SIE_EP2_CNT1 EQU CYREG_USB_SIE_EP2_CNT1
USBUART_USB__SIE_EP2_CR0 EQU CYREG_USB_SIE_EP2_CR0
USBUART_USB__SIE_EP3_CNT0 EQU CYREG_USB_SIE_EP3_CNT0
USBUART_USB__SIE_EP3_CNT1 EQU CYREG_USB_SIE_EP3_CNT1
USBUART_USB__SIE_EP3_CR0 EQU CYREG_USB_SIE_EP3_CR0
USBUART_USB__SIE_EP4_CNT0 EQU CYREG_USB_SIE_EP4_CNT0
USBUART_USB__SIE_EP4_CNT1 EQU CYREG_USB_SIE_EP4_CNT1
USBUART_USB__SIE_EP4_CR0 EQU CYREG_USB_SIE_EP4_CR0
USBUART_USB__SIE_EP5_CNT0 EQU CYREG_USB_SIE_EP5_CNT0
USBUART_USB__SIE_EP5_CNT1 EQU CYREG_USB_SIE_EP5_CNT1
USBUART_USB__SIE_EP5_CR0 EQU CYREG_USB_SIE_EP5_CR0
USBUART_USB__SIE_EP6_CNT0 EQU CYREG_USB_SIE_EP6_CNT0
USBUART_USB__SIE_EP6_CNT1 EQU CYREG_USB_SIE_EP6_CNT1
USBUART_USB__SIE_EP6_CR0 EQU CYREG_USB_SIE_EP6_CR0
USBUART_USB__SIE_EP7_CNT0 EQU CYREG_USB_SIE_EP7_CNT0
USBUART_USB__SIE_EP7_CNT1 EQU CYREG_USB_SIE_EP7_CNT1
USBUART_USB__SIE_EP7_CR0 EQU CYREG_USB_SIE_EP7_CR0
USBUART_USB__SIE_EP8_CNT0 EQU CYREG_USB_SIE_EP8_CNT0
USBUART_USB__SIE_EP8_CNT1 EQU CYREG_USB_SIE_EP8_CNT1
USBUART_USB__SIE_EP8_CR0 EQU CYREG_USB_SIE_EP8_CR0
USBUART_USB__SOF0 EQU CYREG_USB_SOF0
USBUART_USB__SOF1 EQU CYREG_USB_SOF1
USBUART_USB__USB_CLK_EN EQU CYREG_USB_USB_CLK_EN
USBUART_USB__USBIO_CR0 EQU CYREG_USB_USBIO_CR0
USBUART_USB__USBIO_CR1 EQU CYREG_USB_USBIO_CR1

; Vref_sink
Vref_sink__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
Vref_sink__0__MASK EQU 0x08
Vref_sink__0__PC EQU CYREG_PRT0_PC3
Vref_sink__0__PORT EQU 0
Vref_sink__0__SHIFT EQU 3
Vref_sink__AG EQU CYREG_PRT0_AG
Vref_sink__AMUX EQU CYREG_PRT0_AMUX
Vref_sink__BIE EQU CYREG_PRT0_BIE
Vref_sink__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Vref_sink__BYP EQU CYREG_PRT0_BYP
Vref_sink__CTL EQU CYREG_PRT0_CTL
Vref_sink__DM0 EQU CYREG_PRT0_DM0
Vref_sink__DM1 EQU CYREG_PRT0_DM1
Vref_sink__DM2 EQU CYREG_PRT0_DM2
Vref_sink__DR EQU CYREG_PRT0_DR
Vref_sink__INP_DIS EQU CYREG_PRT0_INP_DIS
Vref_sink__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Vref_sink__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Vref_sink__LCD_EN EQU CYREG_PRT0_LCD_EN
Vref_sink__MASK EQU 0x08
Vref_sink__PORT EQU 0
Vref_sink__PRT EQU CYREG_PRT0_PRT
Vref_sink__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Vref_sink__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Vref_sink__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Vref_sink__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Vref_sink__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Vref_sink__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Vref_sink__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Vref_sink__PS EQU CYREG_PRT0_PS
Vref_sink__SHIFT EQU 3
Vref_sink__SLW EQU CYREG_PRT0_SLW

; ADC_DelSig_DEC
ADC_DelSig_DEC__COHER EQU CYREG_DEC_COHER
ADC_DelSig_DEC__CR EQU CYREG_DEC_CR
ADC_DelSig_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DelSig_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DelSig_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DelSig_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DelSig_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DelSig_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DelSig_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DelSig_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DelSig_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DelSig_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DelSig_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DelSig_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DelSig_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DelSig_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DelSig_DEC__PM_ACT_MSK EQU 0x01
ADC_DelSig_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DelSig_DEC__PM_STBY_MSK EQU 0x01
ADC_DelSig_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DelSig_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DelSig_DEC__SR EQU CYREG_DEC_SR
ADC_DelSig_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DelSig_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DelSig_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DelSig_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DelSig_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DelSig_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DelSig_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DelSig_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8

; ADC_DelSig_DSM
ADC_DelSig_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DelSig_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DelSig_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DelSig_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DelSig_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DelSig_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DelSig_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DelSig_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DelSig_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DelSig_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DelSig_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DelSig_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DelSig_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DelSig_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DelSig_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DelSig_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DelSig_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DelSig_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DelSig_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DelSig_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DelSig_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DelSig_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DelSig_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DelSig_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DelSig_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DelSig_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DelSig_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DelSig_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DelSig_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DelSig_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DelSig_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DelSig_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DelSig_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DelSig_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DelSig_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DelSig_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DelSig_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DelSig_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DelSig_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DelSig_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DelSig_DSM__TST1 EQU CYREG_DSM0_TST1

; ADC_DelSig_Ext_CP_Clk
ADC_DelSig_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_DelSig_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_DelSig_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_DelSig_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_Ext_CP_Clk__INDEX EQU 0x00
ADC_DelSig_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_DelSig_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_DelSig_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_DelSig_Ext_CP_Clk__PM_STBY_MSK EQU 0x01

; ADC_DelSig_IRQ
ADC_DelSig_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_DelSig_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_DelSig_IRQ__INTC_MASK EQU 0x20000000
ADC_DelSig_IRQ__INTC_NUMBER EQU 29
ADC_DelSig_IRQ__INTC_PRIOR_NUM EQU 7
ADC_DelSig_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_DelSig_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_DelSig_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; ADC_DelSig_theACLK
ADC_DelSig_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_DelSig_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_DelSig_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_DelSig_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_DelSig_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_DelSig_theACLK__INDEX EQU 0x00
ADC_DelSig_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_DelSig_theACLK__PM_ACT_MSK EQU 0x01
ADC_DelSig_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_DelSig_theACLK__PM_STBY_MSK EQU 0x01

; Vref_source
Vref_source__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Vref_source__0__MASK EQU 0x01
Vref_source__0__PC EQU CYREG_PRT0_PC0
Vref_source__0__PORT EQU 0
Vref_source__0__SHIFT EQU 0
Vref_source__AG EQU CYREG_PRT0_AG
Vref_source__AMUX EQU CYREG_PRT0_AMUX
Vref_source__BIE EQU CYREG_PRT0_BIE
Vref_source__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Vref_source__BYP EQU CYREG_PRT0_BYP
Vref_source__CTL EQU CYREG_PRT0_CTL
Vref_source__DM0 EQU CYREG_PRT0_DM0
Vref_source__DM1 EQU CYREG_PRT0_DM1
Vref_source__DM2 EQU CYREG_PRT0_DM2
Vref_source__DR EQU CYREG_PRT0_DR
Vref_source__INP_DIS EQU CYREG_PRT0_INP_DIS
Vref_source__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Vref_source__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Vref_source__LCD_EN EQU CYREG_PRT0_LCD_EN
Vref_source__MASK EQU 0x01
Vref_source__PORT EQU 0
Vref_source__PRT EQU CYREG_PRT0_PRT
Vref_source__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Vref_source__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Vref_source__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Vref_source__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Vref_source__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Vref_source__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Vref_source__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Vref_source__PS EQU CYREG_PRT0_PS
Vref_source__SHIFT EQU 0
Vref_source__SLW EQU CYREG_PRT0_SLW

; Analog_In_Neg
Analog_In_Neg__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
Analog_In_Neg__0__MASK EQU 0x04
Analog_In_Neg__0__PC EQU CYREG_PRT0_PC2
Analog_In_Neg__0__PORT EQU 0
Analog_In_Neg__0__SHIFT EQU 2
Analog_In_Neg__AG EQU CYREG_PRT0_AG
Analog_In_Neg__AMUX EQU CYREG_PRT0_AMUX
Analog_In_Neg__BIE EQU CYREG_PRT0_BIE
Analog_In_Neg__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Analog_In_Neg__BYP EQU CYREG_PRT0_BYP
Analog_In_Neg__CTL EQU CYREG_PRT0_CTL
Analog_In_Neg__DM0 EQU CYREG_PRT0_DM0
Analog_In_Neg__DM1 EQU CYREG_PRT0_DM1
Analog_In_Neg__DM2 EQU CYREG_PRT0_DM2
Analog_In_Neg__DR EQU CYREG_PRT0_DR
Analog_In_Neg__INP_DIS EQU CYREG_PRT0_INP_DIS
Analog_In_Neg__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Analog_In_Neg__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Analog_In_Neg__LCD_EN EQU CYREG_PRT0_LCD_EN
Analog_In_Neg__MASK EQU 0x04
Analog_In_Neg__PORT EQU 0
Analog_In_Neg__PRT EQU CYREG_PRT0_PRT
Analog_In_Neg__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Analog_In_Neg__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Analog_In_Neg__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Analog_In_Neg__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Analog_In_Neg__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Analog_In_Neg__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Analog_In_Neg__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Analog_In_Neg__PS EQU CYREG_PRT0_PS
Analog_In_Neg__SHIFT EQU 2
Analog_In_Neg__SLW EQU CYREG_PRT0_SLW

; Analog_In_Pos
Analog_In_Pos__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Analog_In_Pos__0__MASK EQU 0x02
Analog_In_Pos__0__PC EQU CYREG_PRT0_PC1
Analog_In_Pos__0__PORT EQU 0
Analog_In_Pos__0__SHIFT EQU 1
Analog_In_Pos__AG EQU CYREG_PRT0_AG
Analog_In_Pos__AMUX EQU CYREG_PRT0_AMUX
Analog_In_Pos__BIE EQU CYREG_PRT0_BIE
Analog_In_Pos__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Analog_In_Pos__BYP EQU CYREG_PRT0_BYP
Analog_In_Pos__CTL EQU CYREG_PRT0_CTL
Analog_In_Pos__DM0 EQU CYREG_PRT0_DM0
Analog_In_Pos__DM1 EQU CYREG_PRT0_DM1
Analog_In_Pos__DM2 EQU CYREG_PRT0_DM2
Analog_In_Pos__DR EQU CYREG_PRT0_DR
Analog_In_Pos__INP_DIS EQU CYREG_PRT0_INP_DIS
Analog_In_Pos__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Analog_In_Pos__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Analog_In_Pos__LCD_EN EQU CYREG_PRT0_LCD_EN
Analog_In_Pos__MASK EQU 0x02
Analog_In_Pos__PORT EQU 0
Analog_In_Pos__PRT EQU CYREG_PRT0_PRT
Analog_In_Pos__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Analog_In_Pos__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Analog_In_Pos__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Analog_In_Pos__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Analog_In_Pos__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Analog_In_Pos__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Analog_In_Pos__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Analog_In_Pos__PS EQU CYREG_PRT0_PS
Analog_In_Pos__SHIFT EQU 1
Analog_In_Pos__SLW EQU CYREG_PRT0_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 48000000
BCLK__BUS_CLK__KHZ EQU 48000
BCLK__BUS_CLK__MHZ EQU 48
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 12
CYDEV_CHIP_DIE_PSOC5LP EQU 19
CYDEV_CHIP_DIE_PSOC5TM EQU 20
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 4
CYDEV_CHIP_FAMILY_FM3 EQU 5
CYDEV_CHIP_FAMILY_FM4 EQU 6
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 12
CYDEV_CHIP_MEMBER_4C EQU 18
CYDEV_CHIP_MEMBER_4D EQU 8
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 13
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 11
CYDEV_CHIP_MEMBER_4I EQU 17
CYDEV_CHIP_MEMBER_4J EQU 9
CYDEV_CHIP_MEMBER_4K EQU 10
CYDEV_CHIP_MEMBER_4L EQU 16
CYDEV_CHIP_MEMBER_4M EQU 15
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4P EQU 14
CYDEV_CHIP_MEMBER_4Q EQU 7
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 20
CYDEV_CHIP_MEMBER_5B EQU 19
CYDEV_CHIP_MEMBER_FM3 EQU 24
CYDEV_CHIP_MEMBER_FM4 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 21
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 22
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 23
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP EQU 1
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA EQU 5
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD EQU 5
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0 EQU 5
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1 EQU 5
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2 EQU 5
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3 EQU 5
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
