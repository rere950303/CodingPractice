//
//  main.c
//  15-4
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;
    
    num1 %= num3;
    num2 %= num3;
    
    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}
