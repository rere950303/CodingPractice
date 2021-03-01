//
//  main.c
//  68-5
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <string.h>

int add(int *a, int *b)
{
    return *a + *b;
}

int sub(int *a, int *b)
{
    return *a - *b;
}

int mul(int *a, int *b)
{
    return *a * *b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char funcName[10];
    int num1, num2;
    scanf("%s %d %d", funcName, &num1, &num2);
    
    int (*fp)(int *, int *);
    
    if(strcmp(funcName, "add") == 0)
        fp = add;
    else if(strcmp(funcName, "sub") == 0)
        fp = sub;
    else
        fp = mul;

    printf("%d\n", fp(&num1, &num2));

    return 0;
}
