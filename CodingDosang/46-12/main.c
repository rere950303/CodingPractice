//
//  main.c
//  46-12
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[31] = "";
    int num1 = 0;
    int num2 = 0;
    float num3 = 0.0f;
    char *end = NULL;
    
    scanf("%[^\n]", s1);
    
    num1 = strtol(s1, &end, 16);
    num2 = strtol(end, &end, 10);
    num3 = strtof(end, NULL);
    
    printf("0x%x\n", num1);
    printf("%d\n", num2);
    printf("%f\n", num3);
    
    return 0;
}
