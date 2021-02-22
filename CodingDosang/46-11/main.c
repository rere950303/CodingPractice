//
//  main.c
//  46-11
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[30] = "";
    float num1 = 98.415237f;
    int num2 = 0x3fc31920;
    
    sprintf(s1, "%f 0x%x", num1, num2);
    
    printf("%s\n", s1);

    return 0;
}
