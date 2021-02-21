//
//  main.c
//  32-5
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 1;
    
    for(int i = 0; i < 10; i++)
    {
        switch(num1)
        {
            case 1:
                printf("1입니다.\n");
                goto EXIT;
            default:
                break;
        }
    }
    
    EXIT:
    return 0;
}
