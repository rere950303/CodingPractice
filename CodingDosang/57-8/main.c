//
//  main.c
//  57-8
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

enum PROTOCOL {
    PROTOCOL_TCP = 6,
    PROTOCOL_UDP = 5,
    PROTOCOL_IP = 4
};

int main(int argc, const char * argv[]) {
    // insert code here...
    enum PROTOCOL p1, p2, p3;
    
    p1 = PROTOCOL_TCP;
    p2 = PROTOCOL_UDP;
    p3 = PROTOCOL_IP;
    
    printf("%d %d %d\n", p1, p2, p3);

    return 0;
}
