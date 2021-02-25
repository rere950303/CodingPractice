//
//  main.c
//  65-4
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

struct point2D {
    int x;
    int y;
};

void printfpoint2D(struct point2D p)
{
    printf("%d %d\n", p.x, p.y);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct point2D p1;
    
    p1.x = 10;
    p1.y = 20;
    
    printfpoint2D(p1);
    
    return 0;
}
