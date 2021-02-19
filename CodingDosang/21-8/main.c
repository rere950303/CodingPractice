//
//  main.c
//  21-8
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 10;
    int num2 = 0;
    
    if(num1 && num1)
        printf("참\n");
    else
        printf("거짓\n");
    
    if(num1 || num2)
        printf("참\n");
    else
        printf("거짓\n");
    
    printf("%s\n", !num2 ? "참" : "거짓");
    
    return 0;
}
