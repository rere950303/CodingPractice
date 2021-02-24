//
//  main.c
//  59-8
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

struct Point2D {
    int x;
    int y;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Point2D p[3] = {{10, 20}, {30, 40}, {50, 60}};
    struct Point2D *ptr;
    
    ptr = p;
    
    printf("%d %d\n", *(ptr + 1), (ptr + 2)->y);
    
    return 0;
}
