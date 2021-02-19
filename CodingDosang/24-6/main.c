//
//  main.c
//  24-6
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char flag1 = 1 << 7;
    unsigned char flag2 = 1 << 3;
    
    flag1 |= 1 << 2;
    flag1 &= ~(1 << 7);
    flag2 ^= 1 << 3;
    
    printf("%u %u\n", flag1, flag2);

    return 0;
}
