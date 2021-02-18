//
//  main.c
//  7-7
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char num1 = 256;
    unsigned short num2 = 65536;
    long long num3 = 9223372036854775808;
    
    printf("%u %u %lld\n", num1, num2, num3);
    
    return 0;
}
