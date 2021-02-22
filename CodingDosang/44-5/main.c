//
//  main.c
//  44-5
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[30] = "Alice in Wonderland";
    
    char *ptr = strchr(s1, 'n');
    
    while(ptr != NULL)
    {
        printf("%s", ptr);
        ptr = strchr(ptr + 1, 'n');
    }
    
    return 0;
}
