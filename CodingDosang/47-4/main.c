//
//  main.c
//  47-4
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char text[30] = "";
    int n = 4;
    
    scanf("%s", text);
    
    unsigned long length = strlen(text);
    if(strlen(text) < n)
    {
        printf("wrong\n");
    }
    else
    {
        for(int i = 0; i < length - (n - 1); i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%c", text[i + j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
