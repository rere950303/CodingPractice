//
//  main.c
//  46-8
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = "0x1facefee";
    int num1 = 0;
    
    num1 = strtol(s1, NULL, 16);
    
    printf("0x%X\n", num1);
    
    return 0;
}
