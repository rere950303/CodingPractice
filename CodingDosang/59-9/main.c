//
//  main.c
//  59-9
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    short *numPtrA;
    short *numPtrB;
    short *numPtrC;
    
    scanf("%p", &numPtrA);
    
    numPtrB = numPtrA + 3;
    numPtrC = numPtrA + 5;

    printf("%X\n", numPtrB);
    printf("%X\n", numPtrC);

    return 0;
}
