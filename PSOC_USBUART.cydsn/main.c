/* ========================================
 *
 * Copyright Thomas Neuhaus, 2016
 * All Rights Reserved
 * licensed under GPL v3
 *
 *
 * ========================================
*/
#include <project.h>
#include <stdio.h>

int main()
{
    //declare variables
    int32 Test_Int = 12345;
    char Test_Str[5];
    
    CyGlobalIntDisable; //Disable Global Interupts
    
    //Start all components
    ADC_DelSig_Start();
    
    CyGlobalIntEnable; // Enable global interrupts. 
    /* Start USBFS operation with 5-V operation. */
    USBUART_Start(0u, USBUART_5V_OPERATION);
    
    for(;;){
        /* Host can send double SET_INTERFACE request. */
        if (0u != USBUART_IsConfigurationChanged()){
            /* Initialize IN endpoints when device is configured. */
            if (0u != USBUART_GetConfiguration()){
                /* Enumeration is done, enable OUT endpoint to receive data 
                 * from host. */
                USBUART_CDC_Init();
            }
        }
    
    sprintf(Test_Str,"%ld",Test_Int);

       while( USBUART_CDCIsReady() == 0);
	    USBUART_PutString("Test"); //print message
        while(! USBUART_CDCIsReady());
		USBUART_PutString("\n"); //set line feed
		while(! USBUART_CDCIsReady());
		CyDelay(50); // wait for 50 ms -> I will try to remove this line in the future
    }
}

/* [] END OF FILE */
