/*******************************************************************************
* File Name: Filter_done.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_Filter_done_H)
#define CY_ISR_Filter_done_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Filter_done_Start(void);
void Filter_done_StartEx(cyisraddress address);
void Filter_done_Stop(void);

CY_ISR_PROTO(Filter_done_Interrupt);

void Filter_done_SetVector(cyisraddress address);
cyisraddress Filter_done_GetVector(void);

void Filter_done_SetPriority(uint8 priority);
uint8 Filter_done_GetPriority(void);

void Filter_done_Enable(void);
uint8 Filter_done_GetState(void);
void Filter_done_Disable(void);

void Filter_done_SetPending(void);
void Filter_done_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Filter_done ISR. */
#define Filter_done_INTC_VECTOR            ((reg32 *) Filter_done__INTC_VECT)

/* Address of the Filter_done ISR priority. */
#define Filter_done_INTC_PRIOR             ((reg8 *) Filter_done__INTC_PRIOR_REG)

/* Priority of the Filter_done interrupt. */
#define Filter_done_INTC_PRIOR_NUMBER      Filter_done__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Filter_done interrupt. */
#define Filter_done_INTC_SET_EN            ((reg32 *) Filter_done__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Filter_done interrupt. */
#define Filter_done_INTC_CLR_EN            ((reg32 *) Filter_done__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Filter_done interrupt state to pending. */
#define Filter_done_INTC_SET_PD            ((reg32 *) Filter_done__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Filter_done interrupt. */
#define Filter_done_INTC_CLR_PD            ((reg32 *) Filter_done__INTC_CLR_PD_REG)


#endif /* CY_ISR_Filter_done_H */


/* [] END OF FILE */
