//
//  main.c
//  23-6
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char num1 = 1;
    unsigned char num2 = 5;
    
    printf("%u\n", num1 | num2);
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 & num2);

    num1 = ~num2;
    
    printf("%u\n", num1);
    
    return 0;
}
