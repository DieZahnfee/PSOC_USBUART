# PSoCUART

## Short Description
Measures the Voltage parallel to the Resistor via the Delta-Sigma Analog-to-Digital Converter, converts it into microvolts and sends it over UART to a Host Pc.

## Develpment Enviroment
- Microcontroller: Cypress PSoC5LP

- Development Board: Cypress CYC8KIT-059

## Used Components
![Schematic](../PSOC_USBUART_Doku/PSOC_USBUART_Doku.png)

### DelSig ADC
- Conversion Mode: Contonius

- Conversion Rate: 170 SpS

- act. Conversion Rate: 172 SpS

- Reference (Voltage) : 1.250V (Vdda/4)

- Input Range: +/- 1.25 V (corresponds to +/- Vref)

### OPAMP
- Mode: OPAMP

- Power: Low Power

### IDAC8
- Polarity: negative (Sink)

- Range: 0-255uA (1uA/bit)

- Value: 8'h80 (128uA)

- Speed: Low Speed

- Data Source: CPU or DMA (Data Bus)

- Strobe Mode: Register Write

### USBUART
Standard Settings are unchanged
