//
//  main.c
//  48-5
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

struct Point2D{
    int x;
    int y;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Point2D p1;
    
    p1.x = 10;
    p1.y = 20;
    
    printf("%d %d\n", p1.x, p1.y);
    
    return 0;
}
