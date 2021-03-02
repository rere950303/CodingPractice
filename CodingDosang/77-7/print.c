//
//  print.c
//  77-7
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>
#include "print.h"

void print(CALC_DATA *data)
{
    printf("%d %c %d = %d\n", data->operand1, data->operator, data->operand2, data->result);
}
