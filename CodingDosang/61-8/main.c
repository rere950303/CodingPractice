//
//  main.c
//  61-8
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory(void)
{
    void *ptr = malloc(100);
    
    return ptr;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1;
    
    s1 = allocMemory();
    strcpy(s1, "Uranus");
    printf("%s\n", s1);
    free(s1);
    
    return 0;
}
