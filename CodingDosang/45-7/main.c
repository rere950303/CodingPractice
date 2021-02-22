//
//  main.c
//  45-7
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[60] = "";
    
    scanf("%s", s1);
    
    char *ptr = strtok(s1, ".");
    
    while(ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strtok(NULL, ".");
    }

    return 0;
}
