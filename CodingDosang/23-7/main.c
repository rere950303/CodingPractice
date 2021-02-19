//
//  main.c
//  23-7
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char num1 = 32;
    
    num1 = num1 >> 4 << 1;
    
    printf("%u\n", num1);
    
    return 0;
}
