//
//  main.c
//  8-9
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float num1 = FLT_MIN;
    
    num1 = num1 / 10e+7;
    
    printf("%e\n", num1);
    
    return 0;
}
