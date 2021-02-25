//
//  main.c
//  65-6
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

double getDistance(struct Point2D p1, struct Point2D p2)
{
    int a = p1.x - p2.x;
    int b = p1.y - p2.y;
    
    return sqrt((a * a) + (b * b));
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Point2D p1;
    struct Point2D p2;
    
    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
    
    printf("%f\n", getDistance(p1, p2));
    
    return 0;
}
