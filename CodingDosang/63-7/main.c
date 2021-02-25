//
//  main.c
//  63-7
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>

void allocMatrix(short ***ptr, int m, int n, int sizeelement)
{
    *ptr = malloc(sizeof(short *) * m);
    
    for(int i = 0; i < n; i++)
    {
        (*ptr)[i] = malloc(sizeelement * n);
    }
}

void freeMatrix(short ***ptr, int m)
{
    for(int i = 0; i < m; i++)
    {
        free((*ptr)[i]);
    }
    
    free(*ptr);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    short **matrix;
    
    allocMatrix(&matrix, 3, 3, sizeof(short));
    
    matrix[0][2] = 10;
    matrix[1][1] = 20;
    
    printf("%d %d\n", matrix[0][2], matrix[1][1]);
    
    freeMatrix(&matrix, 3);

    return 0;
}
