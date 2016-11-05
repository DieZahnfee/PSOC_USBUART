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

// declaring global variables
struct adc adc_del_sig;

//function declaration

int HwModulesStart();
int HwModulesStop();

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
    
    adc_del_sig.new_data = 0u;
    adc_del_sig.data = 0;

    HwModulesStart();
    
    // Start ADC Conversion
    ADC_DelSig_StartConvert();
    
    for(;;){
        
        SerialCheckConf();
        
     
        if(adc_del_sig.new_data == 1u){
            
            // FIR-Filter for calculating moving average
            if(filter_index >= 128) filter_index = 0;
            raw_average = raw_average - mv_filter[filter_index];
            raw_average = raw_average + (adc_del_sig.data >> 7);
            mv_filter[filter_index++] = adc_del_sig.data >> 7;
            
            
            // cutoff 4 Bits
            raw_cut = adc_del_sig.data & BIT_MASK;
            
            
            // converting data to printable format          
            micros = ADC_DelSig_CountsTo_uVolts(adc_del_sig.data);
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
            adc_del_sig.new_data = 0u; // remove new_data flag
            sprintf(str_raw,"000000000%d",0);
            sprintf(str_mv,"000000000%d",0);
            
        }
    }
    return 0;
}

int HwModulesStart(){
        
    CyGlobalIntDisable; //Disable Global Interupts
    
    //Start all components
    ADC_DelSig_Start();
    OPAMP_Start();
    IDAC8_Start();
    USBUART_Start(0u, USBUART_5V_OPERATION);
    
    CyGlobalIntEnable; // Enable global interrupts. 
    
    return 1;
};

int HwModulesStop(){
        
    CyGlobalIntDisable; //Disable Global Interupts
    
    //Start all components
    ADC_DelSig_Stop();
    OPAMP_Stop();
    IDAC8_Stop();
    USBUART_Stop();
    
    CyGlobalIntEnable; // Enable global interrupts. 
    
    return 1;
};

/* [] END OF FILE */
