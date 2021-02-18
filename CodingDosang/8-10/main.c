//
//  main.c
//  8-10
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float num1 = 1.8;
    double num2 = 2.9;
    long double num3 = 3.7l;
    
    printf("%f %f %Lf\n", num1, num2, num3);
    printf("%d %d\n", sizeof(num1), sizeof(num2));
    
    return 0;
}
