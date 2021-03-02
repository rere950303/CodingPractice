//
//  main.c
//  75-9
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

struct Point3D {
    float x, y, z;
};

#define INIT_POINT3D(var, x, y, z) struct Point3D var = {x, y, z};

int main(int argc, const char * argv[]) {
    // insert code here...
    INIT_POINT3D(p1, 1.0f, 2.0f, 3.0f);
    
    printf("%.1f, %.1f %.1f\n", p1.x, p1.y, p1.z);
    
    return 0;
}
