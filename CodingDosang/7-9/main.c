//
//  main.c
//  7-9
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char num1 = CHAR_MAX;
    short num2 = SHRT_MAX;
    int num3 = INT_MAX;
    long num4 = LONG_MAX;
    long long num5 = LLONG_MAX;
    
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    
    return 0;
}
