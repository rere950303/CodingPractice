//
//  main.c
//  62-8
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

long long add(long long a, long long b)
{
    return a + b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    long long num1, num2;
    
    scanf("%lld %lld", &num1, &num2);
    
    printf("%lld\n", add(num1, num2));

    return 0;
}
