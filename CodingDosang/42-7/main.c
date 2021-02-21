//
//  main.c
//  42-7
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = "The Little Prince";
    char *s2 = malloc(sizeof(char) * 20);
    
    strcpy(s2, s1);
    
    printf("%s\n", s2);
    
    free(s2);
    
    return 0;
}
