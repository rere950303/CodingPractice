//
//  main.c
//  46-13
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[10] = "";
    char s2[20] = "";
    int num1 = 0;
    float num2 = 0.0f;
    
    scanf("%d %f", &num1, &num2);
    
    sprintf(s1, "%d", num1);
    sprintf(s2, "%f", num2);
    
    printf("%s\n", s1);
    printf("%s\n", s2);
    
    return 0;
}
