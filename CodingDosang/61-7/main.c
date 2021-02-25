//
//  main.c
//  61-7
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getName(void)
{
    char *str = malloc(sizeof(char) * 20);
    
    strcpy(str, "Mars");
    
    return str;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *name;
    
    name = getName();
    
    printf("%s\n", name);
    
    free(name);
    
    return 0;
}
