//
//  main.c
//  44-7
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[1000] = "";
    int count = 0;
    
    scanf("%[^\n]s", s1);
    
    char *ptr = strchr(s1, ' ');
    
    while(ptr != NULL)
    {
        if(*ptr == ' ')
            count++;
        ptr = strchr(ptr + 1, ' ');
    }
    
    printf("%d\n", count);
    
    return 0;
}
