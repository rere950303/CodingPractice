//
//  main.c
//  435
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[20] = "";
    
    sprintf(s1, "%d %d %d %c %d", 10, 20, 30, 'c', 99);
    
    printf("%s\n", s1);
    
    return 0;
}
