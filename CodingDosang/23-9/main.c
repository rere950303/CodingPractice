//
//  main.c
//  23-9
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned long long n = 0;
    
    printf("정수를 입력하세요: ");
    scanf("%llu", &n);
    
    printf("%llu\n", n << 20 >> 4); // 합 왼쪽 16비트 이동이므로 2의 16제곱만큼 커짐
    
    return 0;
}
