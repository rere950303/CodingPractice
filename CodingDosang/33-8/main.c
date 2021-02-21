//
//  main.c
//  33-8
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n1 = 0;
    int n2 = 0;
    
    printf("2개의 정수를 입력하세요: ");
    scanf("%d %d", &n1, &n2);
    
    for(int i = n1; i <= n2; i++)
    {
        if(i % 5 == 0 && i % 11 == 0)
            printf("FizzBUzz\n");
        else if(i % 5 == 0)
            printf("Fizz\n");
        else if(i % 11 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    
    return 0;
}
