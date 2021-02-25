//
//  main.c
//  62-6
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

float sub(float a, float b)
{
    return a - b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    float num1;
    
    num1 = sub(1.0f, 0.1f);
    
    printf("%f\n", num1);
    
    return 0;
}
