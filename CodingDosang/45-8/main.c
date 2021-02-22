//
//  main.c
//  45-8
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[1001] = "";
    int count = 0;
    
    scanf("%[^\n]s", s1);
    
    char *ptr = strtok(s1, " ,.");
    
    while(ptr != NULL)
    {
        if(*ptr != '\n')
            if(strcmp(ptr, "the") == 0)
                count++;
        ptr = strtok(NULL, " ,.");
    }
    
    printf("%d\n", count);

    return 0;
}
