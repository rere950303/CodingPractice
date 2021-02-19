//
//  main.c
//  29-10
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int num1 = 0;
    unsigned int sum = 0;
    
    scanf("%d", &num1);
    
    unsigned int i = 0;
    
    do
    {
        sum += i;
        i++;
    }while(i <= num1);
    
    printf("%d\n", sum);
    
    return 0;
}
