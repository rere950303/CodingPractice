//
//  main.c
//  72-7
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

struct X850Firmware {
    short serial;
    char mode;
    char desc[20];
    int version;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct X850Firmware x1;
    FILE *fp = fopen("x850.bin", "rb");
    
    fread(&x1, sizeof(struct X850Firmware), 1, fp);
    
    printf("%d\n%c\n%s\n%d\n", x1.serial, x1.mode, x1.desc, x1.version);

    return 0;
}
