//
//  main.c
//  48-7
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point2D;

int main(int argc, const char * argv[]) {
    // insert code here...
    Point2D p1;
    
    p1.x = 10;
    p1.y = 20;
    
    printf("%d %d\n", p1.x, p1.y);
    
    return 0;
}
