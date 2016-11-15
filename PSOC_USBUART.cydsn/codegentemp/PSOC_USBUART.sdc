# THIS FILE IS AUTOMATICALLY GENERATED
# Project: G:\Users\Tommi\Documents\GitHub\PSOC_USBUART\PSOC_USBUART.cydsn\PSOC_USBUART.cyprj
# Date: Tue, 15 Nov 2016 16:51:18 GMT
#set_units -time ns
create_clock -name {ADC_DelSig_Ext_CP_Clk(routed)} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {ADC_DelSig_Ext_CP_Clk} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {ADC_DelSig_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 33 65} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_clock -name {ADC_DelSig_theACLK(fixed-function)} -period 666.66666666666663 -waveform {0 333.333333333333} [get_pins {ClockBlock/aclk_glb_ff_0}]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for G:\Users\Tommi\Documents\GitHub\PSOC_USBUART\PSOC_USBUART.cydsn\TopDesign\TopDesign.cysch
# Project: G:\Users\Tommi\Documents\GitHub\PSOC_USBUART\PSOC_USBUART.cydsn\PSOC_USBUART.cyprj
# Date: Tue, 15 Nov 2016 16:51:13 GMT
