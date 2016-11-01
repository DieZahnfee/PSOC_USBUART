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

int main(){
    // declare variables
    int32 raw_input, raw_cut = 0;
    int32 average = 0;
    int32 micros, micros_average, micros_cut = 0;
    char raw_Str[10], average_Str[10], cut_Str[10];
    uint8 new_data = 0;
    int32 mv_filter[128] = {0};;
    uint8 filter_index = 0;
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
      
        if(ADC_DelSig_IsEndConversion(ADC_DelSig_RETURN_STATUS)){
            
            raw_input = ADC_DelSig_GetResult32();
            
            //FIR MOVING AVERGE FILTER
            
            if(filter_index >= 128) filter_index = 0;
            average = average - mv_filter[filter_index];
            average = average + (raw_input >> 7);
            mv_filter[filter_index++] = raw_input >> 7;
            
            //CUT LAST 4 Bits
            
            raw_cut = raw_input & BIT_MASK;
            
            //PRINT DATA          
            
            micros = ADC_DelSig_CountsTo_uVolts(raw_input);
            sprintf(raw_Str,"u:%ld",micros);
            
            micros_average = ADC_DelSig_CountsTo_uVolts(average);
            sprintf(average_Str,"mv:%ld",micros_average);
            
            micros_cut = ADC_DelSig_CountsTo_uVolts(raw_cut);
            sprintf(cut_Str,"c:%ld",micros_cut);
            
            new_data = 1u; // set new_data flag
            
        }
            
        if(new_data == 1u){
            
            
            // CALLING PRINT ROUTINE
            SerialPrint(raw_Str);
            SerialPrint(average_Str);
            SerialPrint(cut_Str);
		    
            
            //reset new_data flag to zero
            new_data = 0u; // remove new_data flag
            sprintf(raw_Str,"000000000%d",0);
            sprintf(average_Str,"000000000%d",0);
            
        }
    }
}

/* [] END OF FILE */
