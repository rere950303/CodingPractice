//
//  main.c
//  75-10
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

#define RGB(r, g, b) (((b) << 16) | (unsigned short)((g) << 8) | (unsigned char)(r))

int main(int argc, const char * argv[]) {
    // insert code here...
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    
    printf("#%06X\n", RGB(r, g, b));
    printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));

    return 0;
}
