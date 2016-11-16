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


/* Defines for DMA */
#define REQUEST_PER_BURST        (1u)
#define BYTES_PER_BURST          (4u)
#define UPPER_SRC_ADDRESS        CYDEV_PERIPH_BASE
#define UPPER_DEST_ADDRESS       CYDEV_PERIPH_BASE


// declaring global variables
struct data adc_del_sig;
struct data filter;

//function declaration

int HwModulesStart();
int HwModulesStop();
int DmaConfig();

int main(){
    // defining & initializing variables
    int32       raw_average = 0, 
                raw_cut = 0;
    uint32      micros_raw = 0,
                micros_average = 0, 
                micros_cut = 0,
                micros_filter = 0;
    char        str_raw[10],
                str_mv[10], 
                str_cut[10],
                str_filter[10];
    int32       mv_filter[128] = {0};;
    uint8       filter_index = 0;
    
    
    const int32 BIT_MASK = 0xFFFFFFF0;
    
    adc_del_sig.new_data = 0u;
    adc_del_sig.data = 0;
    
    filter.new_data = 0u;
    filter.data = 0;
    
    
    HwModulesStart();
    
    DmaConfig();
    
    //Set ADC Coherency to High Byte
    ADC_DelSig_DEC_COHER_REG |= ADC_DelSig_DEC_SAMP_KEY_HIGH;
    //Set Filter Coherency to High Byte
    Filter_SetCoherency(Filter_CHANNEL_A, Filter_KEY_HIGH);
    
    // Start ADC Conversion
    ADC_DelSig_StartConvert();
    
    for(;;){
        
        SerialCheckConf();
        
     
        if(adc_del_sig.new_data == 1u){
            
            // FIR-Filter for calculating moving average
            if(filter_index >= 128) 
                filter_index = 0;
            
            raw_average = raw_average - mv_filter[filter_index];
            raw_average = raw_average + (adc_del_sig.data >> 7);
            mv_filter[filter_index++] = adc_del_sig.data >> 7;
            
            
            // cutoff 4 Bits
            raw_cut = adc_del_sig.data & BIT_MASK;
            
            // reset new_data flag
            adc_del_sig.new_data = 0u; 
            
            
        }
        //PRINTING DATA
        if(filter.new_data == 1u){
            
            // converting data to printable format
            micros_raw = ADC_DelSig_CountsTo_uVolts(adc_del_sig.data);
            sprintf(str_raw,"%ld ",micros_raw);
            
            micros_average = ADC_DelSig_CountsTo_uVolts(raw_average);
            sprintf(str_mv,"%ld ",micros_average);
            
            micros_cut = ADC_DelSig_CountsTo_uVolts(raw_cut);
            sprintf(str_cut,"%ld ",micros_cut);
           
            micros_filter = ADC_DelSig_CountsTo_uVolts(filter.data);
            sprintf(str_filter,"%ld ",micros_filter);
            
            // Calling print routine
            SerialPrint(str_raw);
            SerialPrint(str_mv);
            SerialPrint(str_cut);
            SerialPrint(str_filter);
            SerialPrint("\n");
		    
            filter.new_data = 0u;
            
            CyPmAltAct(PM_SLEEP_TIME_NONE,PM_SLEEP_SRC_PICU);
            
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
    Filter_Start();
    
    CyGlobalIntEnable; // Enable global interrupts. 
    
    Filter_done_Start();
    
    return 1;
};

int HwModulesStop(){
        
    
    
    //Stop all components
    ADC_DelSig_Stop();
    OPAMP_Stop();
    IDAC8_Stop();
    USBUART_Stop();
    Filter_Stop();
    
    Filter_done_Stop();
    
    return 1;
};

int DmaConfig(){
    

    // Declare variable to hold the handle for DMA channel
    uint8 channelHandle;

    // Declare DMA Transaction Descriptor for memory transfer into
    //  Filter Channel.
    uint8 tdChanA;

    // Configure the DMA to Transfer the data in 1 burst with individual trigger
    // for each burst.
    channelHandle = DMA_DmaInitialize(BYTES_PER_BURST, REQUEST_PER_BURST,
                                        HI16(UPPER_SRC_ADDRESS), HI16(UPPER_DEST_ADDRESS));

    // This function allocates a TD for use with an initialized DMA channel
    tdChanA = CyDmaTdAllocate();

	// Source and Destination address increments are needed as we are using 3 byte transfers
	// but Spoke Width is 16 bit 
    CyDmaTdSetConfiguration(tdChanA, 4u, tdChanA, TD_INC_SRC_ADR | TD_INC_DST_ADR);

    // Set the source address as ADC_DelSig and the destination as
    // Filter Channel A.
    CyDmaTdSetAddress(tdChanA, LO16((uint32)ADC_DelSig_DEC_SAMP_PTR), LO16((uint32)Filter_STAGEA_PTR));

    // Set tdChanA to be the initial TD associated with channelHandle 
    CyDmaChSetInitialTd(channelHandle, tdChanA);

    // Enable the DMA channel represented by channelHandle and preserve the TD
    CyDmaChEnable(channelHandle, 1u);

    return 1;
};


// [] END OF FILE
