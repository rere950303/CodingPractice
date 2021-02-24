//
//  main.c
//  59-7
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int numArr[5] = {11, 22, 33, 44, 55};
    int *numPtrA;
    void *ptr;
    
    numPtrA = &numArr[2];
    ptr = numArr;
    
    printf("%d\n", *(numPtrA + 2));
    printf("%d\n", *((int *)ptr + 1));
           
    return 0;
}
