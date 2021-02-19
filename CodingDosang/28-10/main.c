//
//  main.c
//  28-10
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned char i = 1;
    
    while(i != 0)
    {
        printf("%u\n", i);
        i <<= 1;
        
    }
    
    return 0;
}
