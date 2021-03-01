//
//  main.c
//  73-5
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[10][8] = {
        "india", "delta", "bravo", "kilo", "alfa",
        "echo", "hotel", "juliett", "golf", "charlie"
    };
    
    qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);
    
    for(int i = 0; i < 10; i++)
    {
        printf("%s ", s1[i]);
    }
    
    printf("\n");

    return 0;
}
