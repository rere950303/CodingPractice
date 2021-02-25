//
//  main.c
//  62-9
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>

struct Point3D {
    float x;
    float y;
    float z;
};

struct Point3D *allocPoint3D(float a, float b, float c)
{
    struct Point3D *ptr = malloc(sizeof(struct Point3D));
    
    ptr->x = a;
    ptr->y = b;
    ptr->z = c;

    return ptr;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    float x, y, z;
    struct Point3D *pos1;
    
    scanf("%f %f %f", &x, &y, &z);
    
    pos1 = allocPoint3D(x, y, z);
    
    printf("%f %f %f\n", pos1->x, pos1->y, pos1->z);
    
    free(pos1);

    return 0;
}
