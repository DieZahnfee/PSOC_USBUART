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
    // declare variables
    int32 raw_input = 0;
    int32 micros = 0;
    char raw_Str[10], micros_Str[10];
    uint8 new_data = 0;
   
    
    CyGlobalIntDisable; //Disable Global Interupts
    
    //Start all components
    
    ADC_DelSig_Start();
    OPAMP_Start();
    IDAC8_Start();
    
    CyGlobalIntEnable; // Enable global interrupts. 
    // Start USBFS operation with 5-V operation.
    USBUART_Start(0u, USBUART_5V_OPERATION);
    
    // Start ADC Conversion
    ADC_DelSig_StartConvert();
    
    for(;;){
        
        // Set UART Interface again in case some parameters at the host computer cahnged
        // f.e. Host can send double SET_INTERFACE request
        if (0u != USBUART_IsConfigurationChanged()){
            /* Initialize IN endpoints when device is configured. */
            if (0u != USBUART_GetConfiguration()){
                /* Enumeration is done, enable OUT endpoint to receive data 
                 * from host. */
                USBUART_CDC_Init();
            }
        }
      
        if(ADC_DelSig_IsEndConversion(ADC_DelSig_RETURN_STATUS)){
            raw_input = ADC_DelSig_GetResult32();
            sprintf(raw_Str,"r:%ld",raw_input);
            micros = ADC_DelSig_CountsTo_uVolts(raw_input);
            sprintf(micros_Str,"u:%ld",micros);
            new_data = 1u; // set new-data flag
        }
            
        if(new_data == 1u){
            // PRINT ROUTINE
            while( USBUART_CDCIsReady() == 0);
	        USBUART_PutString(raw_Str); // print message
            while(! USBUART_CDCIsReady());
		    USBUART_PutString("\n"); // set line feed
            while(! USBUART_CDCIsReady());
            while( USBUART_CDCIsReady() == 0);
	        USBUART_PutString(micros_Str); // print message
            while(! USBUART_CDCIsReady());
		    USBUART_PutString("\n"); // set line feed
		    CyDelay(50); // wait for 50 ms -> I will try to remove this line in the future
            
            //reset new_data flag to zero
            new_data = 0u;
            sprintf(raw_Str,"000000000%d",0);
            sprintf(micros_Str,"000000000%d",0);
        }
    }
}

/* [] END OF FILE */
