//
//  main.c
//  42-8
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[20] = " 9th Symphny";
    char s2[40] = "Beethoven";
    
    strcat(s2, s1);
    
    printf("%s\n", s2);
    
    return 0;
}
