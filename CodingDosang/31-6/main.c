//
//  main.c
//  31-6
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
