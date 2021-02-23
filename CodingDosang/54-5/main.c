//
//  main.c
//  54-5
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

union Data {
    char c1;
    short num1;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    union Data d1;
    
    d1.num1 = 0x5678;
    
    printf("0x%x 0x%x\n", d1.num1, d1.c1);

    return 0;
}
