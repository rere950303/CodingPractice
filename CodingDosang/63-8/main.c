//
//  main.c
//  63-8
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compareString(char *s1, char *s2)
{
    if(strcmp(s1, s2) == 0)
        printf("같음\n");
    else
        printf("다름\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = malloc(sizeof(char) * 10);
    
    strcpy(s1, "Venus");
    
    compareString(s1, "Venus");
    
    free(s1);

    return 0;
}
