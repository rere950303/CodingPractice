//
//  main.c
//  61-12
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* allocMemory(void)
{
    void* ptr = malloc(8);
    
    return ptr;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *name;
    float *stats;
    
    name = allocMemory();
    strcpy(name, "Mercury");
    printf("%s\n", name);
    free(name);
    
    stats = allocMemory();
    stats[0] = 87.969f;
    stats[1] = 115.8776f;
    printf("%f %f\n", stats[0], stats[1]);
    free(stats);

    return 0;
}
