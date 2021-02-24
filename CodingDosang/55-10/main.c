//
//  main.c
//  55-10
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

struct Deviceoption {
    union {
        short option;
        struct {
            unsigned char boot;
            unsigned char interrupt;
        };
    };
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Deviceoption opt;
    
    opt.boot = 0x22;
    opt.interrupt = 0x11;

    printf("0x%x\n", opt.option);

    return 0;
}
