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

//Global Variables
extern uint8 new_adc_data;
extern int32 raw_input;

struct adc{
    uint8 new_data;
    int32 data;
};
 extern struct adc adc_del_sig;

/* [] END OF FILE */
