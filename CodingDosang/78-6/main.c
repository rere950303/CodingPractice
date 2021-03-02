//
//  main.c
//  78-6
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>
#include "point3d.h"

extern struct Point3D p1;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%.1f %.1f %.1f\n", p1.x, p1.y, p1.z);

    return 0;
}
