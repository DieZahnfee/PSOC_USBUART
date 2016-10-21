/*******************************************************************************
* File Name: OPAMP_PM.c
* Version 1.90
*
* Description:
*  This file provides the power management source code to the API for the 
*  OpAmp (Analog Buffer) component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "OPAMP.h"

static OPAMP_BACKUP_STRUCT  OPAMP_backup;


/*******************************************************************************  
* Function Name: OPAMP_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration registers.
* 
* Parameters:
*  void
* 
* Return:
*  void
*
*******************************************************************************/
void OPAMP_SaveConfig(void) 
{
    /* Nothing to save as registers are System reset on retention flops */
}


/*******************************************************************************  
* Function Name: OPAMP_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration registers.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void OPAMP_RestoreConfig(void) 
{
    /* Nothing to restore */
}


/*******************************************************************************   
* Function Name: OPAMP_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves its configuration. Should be called 
*  just prior to entering sleep.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OPAMP_backup: The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void OPAMP_Sleep(void) 
{
    /* Save OpAmp enable state */
    if((OPAMP_PM_ACT_CFG_REG & OPAMP_ACT_PWR_EN) != 0u)
    {
        /* Component is enabled */
        OPAMP_backup.enableState = 1u;
         /* Stops the component */
         OPAMP_Stop();
    }
    else
    {
        /* Component is disabled */
        OPAMP_backup.enableState = 0u;
    }
    /* Saves the configuration */
    OPAMP_SaveConfig();
}


/*******************************************************************************  
* Function Name: OPAMP_Wakeup
********************************************************************************
*
* Summary:
*  Enables block's operation and restores its configuration. Should be called
*  just after awaking from sleep.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OPAMP_backup: The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void OPAMP_Wakeup(void) 
{
    /* Restore the user configuration */
    OPAMP_RestoreConfig();

    /* Enables the component operation */
    if(OPAMP_backup.enableState == 1u)
    {
        OPAMP_Enable();
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
