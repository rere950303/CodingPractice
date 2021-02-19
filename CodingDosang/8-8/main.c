
//
//  main.c
//  8-8
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float num1 = FLT_MAX;
    double num2 = DBL_MIN;
    long double num3 = LDBL_MAX;
    
    printf("%.2f\n", num1);
    printf("%e\n", num2);
    printf("%Le\n", num3);

    return 0;
}
