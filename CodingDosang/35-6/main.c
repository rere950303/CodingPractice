//
//  main.c
//  35-6
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *numPtr1 = malloc(sizeof(int));
    long long *numPtr2 = malloc(sizeof(long long));
    
    *numPtr1 = INT_MAX;
    *numPtr2 = LLONG_MAX;
    
    printf("%d %lld\n", *numPtr1, *numPtr2);
    
    free(numPtr1);
    free(numPtr2);

    return 0;
}
