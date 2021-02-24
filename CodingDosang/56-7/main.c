//
//  main.c
//  56-7
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

struct Flags {
    union {
        struct {
            unsigned short a : 3;
            unsigned short b : 4;
            unsigned short c : 7;
            unsigned short d : 2;
        };
        unsigned short e;
    };
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Flags f1 = {0};
    
    f1.a = 4;
    f1.b = 8;
    f1.c = 64;
    f1.d = 3;
    
    printf("%u\n", f1.e);  // printf("0x%x", 57412)로 2진수 비트 파악

    return 0;
}
