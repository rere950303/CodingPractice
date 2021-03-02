//
//  main.c
//  79-8
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

struct Point2D {
    int x, y;
};

struct Point2D movePoint(int num1)
{
    static struct Point2D p1 = {10, 20};
    
    p1.x += 2;
    p1.y += 2;
    
    return p1;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int num1;
    struct Point2D p;
    
    scanf("%d", &num1);
    
    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);
    
    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);
    
    p = movePoint(num1);
    printf("%d %d\n", p.x, p.y);
    
    return 0;
}
