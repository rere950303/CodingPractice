//
//  main.c
//  54-7
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

union Data {
    int num1;
    char c1;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    union Data d1;
    
    d1.num1 = 0x1111;
    
    printf("0x%x %d\n", d1.c1, sizeof(d1));
    
    return 0;
}