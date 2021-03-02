//
//  main.c
//  79-6
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

int getPowerOF2(void)
{
    static int num1 = 1;
    
    num1 *= 2;
    
    return num1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n", getPowerOF2());
    printf("%d\n", getPowerOF2());
    printf("%d\n", getPowerOF2());
    printf("%d\n", getPowerOF2());
    
    return 0;
}
