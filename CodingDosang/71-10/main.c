//
//  main.c
//  71-10
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1;
    char *s2;
    FILE *fp = fopen("words.txt", "r");
    
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    
    s1 = malloc(size + 1);
    s2 = malloc(size + 1);

    memset(s1, 0, size + 1);
    memset(s2, 0, size + 1);

    fseek(fp, 7, SEEK_SET);
    fread(s1, sizeof(char), 4, fp);
    fseek(fp, -6, SEEK_END);
    fread(s2, sizeof(char), 2, fp);
    
    printf("%s%s\n", s1, s2);

    return 0;
}
