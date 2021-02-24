//
//  main.c
//  56-6
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

struct Flags {
    unsigned int a : 4;
    unsigned int b : 7;
    unsigned int c : 3;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Flags f1;
    
    f1.a = 0xffffffff;
    f1.b = 0xffffffff;
    f1.c = 0xffffffff;

    printf("%u %u %u\n", f1.a, f1.b, f1.c);

    return 0;
}
