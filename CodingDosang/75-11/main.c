//
//  main.c
//  75-11
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

struct Point2D {
    float x, y;
};

#define ARRSIZE(a) (sizeof(a) / sizeof(a[0]))

int main(int argc, const char * argv[]) {
    // insert code here...
    int numArr1[10];
    long long numArr2[5];
    struct Point2D p[3];
    
    printf("%d\n", ARRSIZE(numArr1));
    printf("%d\n", ARRSIZE(numArr2));
    printf("%d\n", ARRSIZE(p));

        
    return 0;
}
