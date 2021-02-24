//
//  main.c
//  56-4
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

struct Flags {
    unsigned int a : 2;
    unsigned int b : 1;
    unsigned int c : 6;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Flags fl;
    
    fl.a = 0xffffffff;
    fl.b = 0xffffffff;
    fl.c = 0xffffffff;
    
    printf("%u %u %u\n", fl.a, fl.b, fl.c);

    return 0;
}
