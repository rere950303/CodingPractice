//
//  main.c
//  46-9
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = "97.527824";
    float num1 = 0.0f;
    
    num1 = atof(s1);
    
    printf("%f\n", num1);
    
    return 0;
}
