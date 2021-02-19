//
//  main.c
//  23-8
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int num1 = 0;
    unsigned int num2 = 0;
    
    printf("2개의 정수를 입력하세요: ");
    scanf("%u %u", &num1, &num2);
    
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 | num2);
    printf("%u\n", num1 & num2);
    printf("%u\n", ~num1);

    return 0;
}
