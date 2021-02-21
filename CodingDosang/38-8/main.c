//
//  main.c
//  38-8
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int m = 0;
    int n = 0;
    int count = 0;
    
    scanf("%d %d", &m, &n);
    
    char **matrix = malloc(sizeof(char *) * m);
    
    for(int i = 0; i < m; i++)
    {
        matrix[i] = malloc(sizeof(char) * (n + 1));
    }
    
    for(int i = 0; i < m; i++)
    {
        scanf("%s", matrix[i]);
    }
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == '*')
                printf("%c", matrix[i][j]);
            else
            {
                for(int k = i - 1; k <= i + 1; k++)
                {
                    for(int p = j - 1; p <= j + 1; p++)
                    {
                        if(k < 0 || p < 0 || k >= m || p >= n)
                            continue;
                        else if(matrix[k][p] == '*')
                            count++;
                    }
                }
                matrix[i][j] = count;
                printf("%d", matrix[i][j]);
                count = 0;
            }
        }
        printf("\n");
    }
    
    for(int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }
    
    free(matrix);

    return 0;
}
