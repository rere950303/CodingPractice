//
//  main.c
//  51-5
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    short length;
    int seq;
};
#pragma pack(pop)


int main(int argc, const char * argv[]) {
    // insert code here...
    struct Packet pkt;
    
    printf("%d\n", sizeof(pkt));
    
    return 0;
}
