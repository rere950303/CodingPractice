//
//  main.c
//  47-6
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[11] = "";
    int n = 0;
    
    scanf("%d %s", &n, s);
    
    unsigned long len = strlen(s);
    
    if(len < n)
        printf("잘못된 입력입니다.\n");
    else
    {
        for(int i = 0; i < len - n + 1; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%c", s[i + j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
