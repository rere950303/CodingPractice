//
//  main.c
//  78-7
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>
#include <stdlib.h>

struct Point2D {
    int x;
    int y;
};

struct Point2D *p1;

void printPoint2D(void)
{
    printf("%d %d\n", p1->x, p1->y);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    p1 = malloc(sizeof(struct Point2D));
    p1->x = 10;
    p1->y = 20;
    
    printPoint2D();
    
    free(p1);

    return 0;
}
