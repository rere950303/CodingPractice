//
//  main.c
//  12-5
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float num1 = 0.0f;
    float num2 = 0.0f;
    float num3 = 0.0f;
    
    scanf("%f %f", &num1, &num2);
    
    num3 = num1 + num2 - 4.5;

    printf("%f\n", num3);
    
    return 0;
}

