//
//  main.c
//  44-6
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[30] = "The Little Prince";
    
    char *ptr = strrchr(s1, 'i');
    
    printf("%s\n", ptr);

    return 0;
}
