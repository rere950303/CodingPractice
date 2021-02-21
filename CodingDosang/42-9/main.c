//
//  main.c
//  42-9
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = " Wonderland";
    char *s2 = malloc(sizeof(char) * 30);
    
    strcpy(s2, "Alice in");
    strcat(s2, s1);
    
    printf("%s\n", s2);
    
    free(s2);

    return 0;
}
