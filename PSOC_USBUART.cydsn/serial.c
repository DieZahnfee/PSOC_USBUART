/* ========================================
*
* Copyright Thomas Neuhaus, 2016
* All Rights Reserved
* licensed under GPL v3
*
* ========================================
*/
#include <serial.h>

void SerialCheckConf(){
    
    // Setup UART Interface again if connection parameters at the host computer have changed
    // e.g. Host can send double SET_INTERFACE request
    
    if (0u != USBUART_IsConfigurationChanged()){
        /* Initialize IN endpoints when device is configured. */
        if (0u != USBUART_GetConfiguration()){
            /* Enumeration is done, enable OUT endpoint to receive data 
            * from host. */
            USBUART_CDC_Init();
        }
    }

}

void SerialPrint(const char8 string[]){
    
    while( USBUART_CDCIsReady() == 0);
	USBUART_PutString(string); // print message
    while(! USBUART_CDCIsReady());
	USBUART_PutString("\n"); // set line feed
	
}

/* [] END OF FILE */
