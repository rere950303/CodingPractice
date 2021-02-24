//
//  main.c
//  58-11
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned long long *numPtr1 = malloc(sizeof(unsigned long long));
    unsigned int *numPtr2;
    
    scanf("%llx", numPtr1);
    
    numPtr2 = (unsigned int *)numPtr1;
    
    printf("0x%x\n", *numPtr2);
    
    free(numPtr1);
    
    return 0;
}
