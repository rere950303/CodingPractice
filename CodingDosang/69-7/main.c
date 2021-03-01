//
//  main.c
//  69-7
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

struct Calc {
    int (*fp[2])(int, int);
};

int executer(int (*fp)(int, int), int a, int b)
{
    return fp(a, b);
}

int (*getFunc(struct Calc *c, int index))(int, int)
{
    return c->fp[index];
}


int main(int argc, const char * argv[]) {
    // insert code here...
    struct Calc c = {{add, sub}};
    
    printf("%d\n", executer(getFunc(&c, 0), 10, 20));
    printf("%d\n", executer(getFunc(&c, 1), 10, 20));

    return 0;
}
