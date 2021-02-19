//
//  main.c
//  20-9
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 0;
    
    printf("정수를 입력하세요: ");
    scanf("%d", &num1);
    
    printf("%d\n", num1 == 7 ? 2 : 1);
    
    return 0;
}
