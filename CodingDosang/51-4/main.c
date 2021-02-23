//
//  main.c
//  51-4
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

struct CompressHeader {
    char flags;
    int version;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct CompressHeader header;
    
    printf("%d\n", sizeof(header));
    
    return 0;
}
