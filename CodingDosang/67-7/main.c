//
//  main.c
//  67-7
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    scanf("%d", &n);
    
    printf("%d\n", sum(n));

    return 0;
}
