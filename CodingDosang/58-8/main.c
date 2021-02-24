//
//  main.c
//  58-8
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    uint64_t *numPtr1 = malloc(sizeof(uint64_t));
    void *ptr;
    
    *numPtr1 = 12;
    ptr = numPtr1;
    printf("%llu\n", *(uint64_t *)ptr);
    
    free(numPtr1);

    return 0;
}
