//
//  main.c
//  14-5
//
//  Created by hyungwook on 2021/02/18.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float diameter = 0.0;
    float radius = 0.0;
    float area = 0.0;
    
    scanf("%f", &diameter);
    
    area = M_PI * pow((diameter / 2), 2);
    
    printf("%f\n", area);
    
    return 0;
}
