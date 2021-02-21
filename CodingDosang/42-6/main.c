//
//  main.c
//  42-6
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = "C Language";
    char s2[20] = "";
    
    strcpy(s2, s1);
    
    printf("%s\n", s2);

    return 0;
}
