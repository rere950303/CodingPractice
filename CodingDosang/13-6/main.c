//
//  main.c
//  13-6
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 2;
    int num2 = 8;
    int num3 = 0;
    int num4 = 0;
    
    num1++;
    num3 = --num1;
    --num2;
    num4 = num2++;
    
    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}
