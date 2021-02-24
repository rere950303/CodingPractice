//
//  main.c
//  58-7
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *numPtr1 = malloc(sizeof(int));
    short *numPtr2;
    
    *numPtr1 = 0x11223344;
    numPtr2 = (short*)numPtr1;
    
    printf("0x%x\n", *numPtr2);
    
    free(numPtr1);

    return 0;
}
