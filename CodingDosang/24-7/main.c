//
//  main.c
//  24-7
//
//  Created by hyungwook on 2021/02/19.
//

#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char flag = 16;
    unsigned char num1 = 0;
    unsigned char num2 = 0;

    
    scanf("%hhu %hhu", &num1, &num2);
    
    flag |= (num1 << 3);
    flag &= ~(num2 >> 2);
    flag ^= (unsigned char)128;

    printf("%hhu\n", flag);
    
    return 0;
}
