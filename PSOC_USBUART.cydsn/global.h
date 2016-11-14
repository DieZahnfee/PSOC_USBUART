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

struct data{
    uint8 new_data;
    int32 data;
};
 extern struct data adc_del_sig;

extern struct data filter;

/* [] END OF FILE */
