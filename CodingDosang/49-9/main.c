//
//  main.c
//  49-9
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>

struct Point3D {
    float x;
    float y;
    float z;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Point3D p1 = {10.0f, 20.0f, 30.0f};
    struct Point3D *ptr = &p1;
    
    printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);

    return 0;
}
