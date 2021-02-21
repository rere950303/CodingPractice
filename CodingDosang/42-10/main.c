//
//  main.c
//  42-10
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[31] = "";
    char s2[31] = "";
    
    scanf("%s", s1);
    
    strcat(s2, s1);
    
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
