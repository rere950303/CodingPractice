//
//  main.c
//  75-8
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n", MIN(10, 20));
    printf("%d\n", MAX(4&4, 2&2));

    return 0;
}
