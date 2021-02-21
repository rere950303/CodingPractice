//
//  main.c
//  31-7
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    
    printf("삼각형의 높이를 입력하세요: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        printf(" ");
        for(int j = 1; j <= 2 * i - 1; j++)
        printf("*");
        printf("\n");
    }

    return 0;
}
