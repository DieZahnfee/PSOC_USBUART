/* ========================================
*
* Copyright Thomas Neuhaus, 2016
* All Rights Reserved
* licensed under GPL v3
*
* ========================================
*/
#include <project.h>
#include <stdio.h>
#include <serial.h>
#include <global.h>

uint8 adc_new_data = 0u;
int32 adc_input_data = 0;

int main(){
    // defining & initializing variables
    int32       raw_average = 0, 
                raw_cut = 0, 
                micros = 0, 
                micros_average = 0, 
                micros_cut = 0;
    char        str_raw[10], 
                str_mv[10], 
                str_cut[10];
    int32       mv_filter[128] = {0};;
    uint8       filter_index = 0;
    const int32 BIT_MASK = 0xFFFFFFF0;
    
    
   
    
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
        
        SerialCheckConf();
     
        if(adc_new_data == 1u){
            
            // FIR-Filter for calculating moving average
            if(filter_index >= 128) filter_index = 0;
            raw_average = raw_average - mv_filter[filter_index];
            raw_average = raw_average + (adc_input_data >> 7);
            mv_filter[filter_index++] = adc_input_data >> 7;
            
            
            // cutoff 4 Bits
            raw_cut = adc_input_data & BIT_MASK;
            
            
            // converting data to printable format          
            micros = ADC_DelSig_CountsTo_uVolts(adc_input_data);
            sprintf(str_raw,"u:%ld;",micros);
            
            micros_average = ADC_DelSig_CountsTo_uVolts(raw_average);
            sprintf(str_mv,"mv:%ld;",micros_average);
            
            micros_cut = ADC_DelSig_CountsTo_uVolts(raw_cut);
            sprintf(str_cut,"c:%ld",micros_cut);
           
            
            // Calling print routine
            SerialPrint(str_mv);
            SerialPrint(str_cut);
            SerialPrint("\n");
		    
            
            //reset new_data flag to zero & flush the strings
            adc_new_data = 0u; // remove new_data flag
            sprintf(str_raw,"000000000%d",0);
            sprintf(str_mv,"000000000%d",0);
            
        }
    }
    return 0;
}

/* [] END OF FILE */
