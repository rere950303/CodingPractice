//
//  main.c
//  76-6
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#include "debug.h"

int main(int argc, const char * argv[]) {
    // insert code here...
#if defined DEBUG && defined ENABLE_DEBUG_MESSAGE
    printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

    return 0;
}
