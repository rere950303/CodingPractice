//
//  main.c
//  63-10
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>

void allocArray(void **ptr, int n, int sizeelement)
{
    (*ptr) = malloc(n * sizeelement);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    long long *numArr1;
    int *numArr2;
    
    allocArray((void **)&numArr1, 10, sizeof(long long));
    allocArray((void **)&numArr2, 3, sizeof(int));

    scanf("%lld %d", &numArr1[9], &numArr2[2]);
    printf("%lld %d\n", numArr1[9], numArr2[2]);

    free(numArr2);
    free(numArr1);

    return 0;
}
