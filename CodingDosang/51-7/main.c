//
//  main.c
//  51-7
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    char a;
    short b;
};
#pragma pack(pop)

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Packet pkt;
    
    printf("%d\n", sizeof(pkt));
    
    return 0;
}
