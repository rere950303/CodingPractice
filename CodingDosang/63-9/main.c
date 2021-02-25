//
//  main.c
//  63-9
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

int getQuotientAndReamainder(int a, int b, int *c)
{
    *c = a % b;
    
    return a / b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1, num2;
    int quotient, remainder;
    
    scanf("%d %d", &num1, &num2);
    
    quotient = getQuotientAndReamainder(num1, num2, &remainder);
    
    printf("%d %d\n", quotient, remainder);

    return 0;
}
