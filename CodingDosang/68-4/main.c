//
//  main.c
//  68-4
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

void hello (void)
{
    printf("Hello, ");
}

void numberToString(int n, char *buffur)
{
    sprintf(buffur, "%d", n);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    void (*fp1)(void);
    void (*fp2)(int, char *);
    char buffur[20];
    
    fp1 = hello;
    fp2 = numberToString;
    
    fp1();
    fp2(100, buffur);
    printf("%s\n", buffur);

    return 0;
}
