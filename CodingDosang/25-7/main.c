//
//  main.c
//  25-7
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    printf("3개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("%d\n", (num1 + num2) * 10 - 3);

    return 0;
}
