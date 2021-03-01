//
//  main.c
//  67-6
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

int fib(int n)
{
    if(n == 1)
        return 1;
    else if(n == 0)
        return 0;
    else
        return fib(n - 1) + fib(n - 2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1;
    scanf("%d", &num1);
    
    printf("%d\n", fib(num1));

    return 0;
}
