//
//  main.c
//  50-3
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Point2D p1;
    struct Point2D p2;
    double distance = 0.0;
    
    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);
    
    int a = p2.x - p1.x;
    int b = p2.y - p1.y;
    
    distance = sqrt((a * a) + (b * b));
    
    printf("%f\n", distance);
    
    return 0;
}
