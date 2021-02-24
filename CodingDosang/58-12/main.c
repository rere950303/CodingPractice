//
//  main.c
//  58-12
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    long double *numPtr1 = malloc(sizeof(long double));
    void *ptr;
    
    scanf("%Lf", numPtr1);
    
    ptr = numPtr1;
    
    printf("%Lf\n", *(long double *)ptr);
    
    free(numPtr1);

    return 0;
}
