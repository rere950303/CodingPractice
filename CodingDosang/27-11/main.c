//
//  main.c
//  27-11
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i = 2, j = 5; i <= 32; i *= 2, j--)
    printf("%d %d\n", i, j);
    
    return 0;
}
