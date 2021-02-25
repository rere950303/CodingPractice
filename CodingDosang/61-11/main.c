//
//  main.c
//  61-11
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getName(void)
{
    char *ptr = malloc(8);
    
    strcpy(ptr, "Neptune");
    
    return ptr;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *name;
    
    name = getName();
    
    printf("%s\n", name);
    
    free(name);

    return 0;
}
