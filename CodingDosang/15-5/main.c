//
//  main.c
//  15-5
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    
    printf("만 단위의 정수를 입력하세요: ");
    scanf("%d", &n);
    
    printf("역순출력\n");
    for(int i = 1; i <= 5; i++)
    {
        printf("%d ", n % 10);
        n /= 10;
    }
    printf("\n");
        
    return 0;
}
