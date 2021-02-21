//
//  main.c
//  38-7
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    
    scanf("%d", &n);
    
    int **m = malloc(sizeof(int *) * n);
    
    for(int i = 0; i < n; i++)
    {
        m[i] = malloc(sizeof(int) * n);
    }
    
    for(int i = 0; i < n; i++)
    {
        m[i][i] = 1;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
