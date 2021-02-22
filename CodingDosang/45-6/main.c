
//
//  main.c
//  45-6
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[40] = "Alice's Adventures in Wonderland";
    
    char *tok = strtok(s1, " ");
    
    while(tok != NULL)
    {
        printf("%s\n", tok);
        tok = strtok(NULL, " ");
    }
    
    return 0;
}
