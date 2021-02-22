//
//  main.c
//  46-10
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = "29.977213 4528.112305";
    float num1 = 0.0f;
    float num2 = 0.0f;
    char *end = NULL;
    
    num1 = strtof(s1, &end);
    num2 = strtof(end, NULL);
    
    printf("%f\n", num1);
    printf("%f\n", num2);

    return 0;
}
