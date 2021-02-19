//
//  main.c
//  30-7
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 0;
    int num2 = 0;
    
    scanf("%d %d", &num1, &num2);
    
    int i = num1;
    
    while(1)
    {
        if(i % 10 != 7)
            printf("%d ", i);
        i++;
        
        if(i > num2)
            break;
    }
    
    return 0;
}
