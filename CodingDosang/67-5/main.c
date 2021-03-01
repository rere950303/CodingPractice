//
//  main.c
//  67-5
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

int sum(int n)
{
    if(n == 100)
        return 100;
    
    return n + sum(n + 1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n", sum(1));

    return 0;
}
