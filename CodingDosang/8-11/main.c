//
//  main.c
//  8-11
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double doubleMin = 0.0;
    double doubleMax = 0.0;
    long double longDoubleMin = 0.0;
    long double longDoubleMax = 0.0;
    
    doubleMin = DBL_MIN;
    doubleMax = DBL_MAX;
    longDoubleMin = LDBL_MIN;
    longDoubleMax = LDBL_MAX;

    printf("%e %e\n", doubleMin, doubleMax);
    printf("%Le %Le\n", longDoubleMin, longDoubleMax);
    
    return 0;
}
