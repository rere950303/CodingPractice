//
//  calc.c
//  77-7
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>
#include "print.h"

void mul(CALC_DATA *data)
{
    data->operator = '*';
    
    data->result = data->operand1 * data->operand2;
}
