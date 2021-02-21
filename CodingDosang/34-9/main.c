//
//  main.c
//  34-9
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *numptr = NULL;
    int num1 = 10;
    int num2 = 20;
    
    numptr = &num1;
    printf("%d\n", *numptr);
    
    numptr = &num2;
    printf("%d\n", *numptr);
    
    return 0;
}
