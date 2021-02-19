//
//  main.c
//  25-6
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 1;
    int num2 = 1;
    int num3 = 2 * ((1 << num1) + (2 >> num2));
    
    printf("%d\n", num3);

    return 0;
}
