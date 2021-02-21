//
//  main.c
//  37-9
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int matrix[5][5] = {0};
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = i; j < 5; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
