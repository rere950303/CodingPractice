//
//  main.c
//  72-6
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct X820Firmware {
    int serial;
    char desc[15];
    short tag;
    char mode;
};
#pragma pack(pop);

int main(int argc, const char * argv[]) {
    // insert code here...
    struct X820Firmware x1;
    memset(&x1, 0, sizeof(x1));
    
    FILE *fp = stdout;
    
    x1.serial = 1800891002;
    strcpy(x1.desc, "X820 Firmware");
    x1.tag = 8512;
    x1.mode = '-';
    
    fwrite(&x1, sizeof(x1), 1, fp);
    printf("%x", x1.serial);
    fclose(fp);

    return 0;
}
