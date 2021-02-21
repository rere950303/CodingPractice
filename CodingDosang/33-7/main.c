//
//  main.c
//  33-7
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0 && i % 7 == 0)
            printf("FizzBuzz\n");
        else if(i % 2 == 0)
            printf("Fizz\n");
        else if(i % 7 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    
    return 0;
}
