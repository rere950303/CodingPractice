//
//  main.c
//  52-5
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point2D {
    int x;
    int y;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Point2D p1;
    struct Point2D *p2 = malloc(sizeof(struct Point2D));
    
    p1.x = 10;
    p1.y = 20;
    
    memcpy(p2, &p1, sizeof(struct Point2D));
    
    printf("%d %d\n", p2->x, p2->y);
    
    free(p2);

    return 0;
}
