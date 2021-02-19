//
//  main.c
//  26-7
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 0;
    
    scanf("%d", &num1);
    
    switch(num1)
    {
        case 1 << 1:
            printf("2\n");
            break;
            
        case 1 << 2:
            printf("4\n");
            break;
            
        case 1 << 3:
            printf("8\n");
            break;
            
        default:
            printf("default\n");
            break;
    }
    
    return 0;
}
