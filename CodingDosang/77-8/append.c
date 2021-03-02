//
//  append.c
//  77-8
//
//  Created by hyungwook on 2021/03/02.
//

#include <string.h>
#include "data.h"

void append(DATA *data, char *s1, char *s2)
{
    strcpy(data->string, s1);
    strcat(data->string, s2);
}
