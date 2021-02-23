//
//  main.c
//  51-6
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

struct EncryptionHeader {
    char flags;
    int a;
    char b;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct EncryptionHeader header;
    
    printf("%d\n", sizeof(header));
    
    return 0;
}
