//
//  main.c
//  63-11
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

void printfFullname(char *s1, char *s2)
{
    printf("%s%s\n", s1, s2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char familyName[31];
    char givenName[31];
    
    scanf("%s %s", familyName, givenName);
    
    printfFullname(familyName, givenName);
    
    return 0;
}
