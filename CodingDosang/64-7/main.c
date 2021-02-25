//
//  main.c
//  64-7
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

void transpose(int matrix[4][4], int n )
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int matrix[4][4];
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int n = sizeof(matrix[0]) / sizeof(int);
    
    transpose(matrix, n);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
