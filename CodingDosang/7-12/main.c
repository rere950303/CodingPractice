//
//  main.c
//  7-12
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char num1 = 0;
    short num2 = 0;
    
    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long));
    
    return 0;
}
