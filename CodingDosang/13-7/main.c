//
//  main.c
//  13-7
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 0;
    float num2 = 0.0f;
    char c1 = '\0';
    
    scanf("%d %f %c", &num1, &num2, &c1);
    
    num1++;
    num2++;
    c1--;
    
    printf("%d %f %c\n", num1, num2, c1);
    
    return 0;
}
