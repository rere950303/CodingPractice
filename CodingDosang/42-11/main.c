//
//  main.c
//  42-11
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[40] = "";
    
    scanf("%s", s1);
    
    strcat(s1, "th");
    
    printf("%s\n", s1);
    
    return 0;
}
