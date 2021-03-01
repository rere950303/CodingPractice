//
//  main.c
//  71-11
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s;
    FILE *fp = fopen("words.txt", "r");
    
    fseek(fp, 0, SEEK_END);
    
    int size = ftell(fp);
    
    fseek(fp, 0, SEEK_SET);
    
    s = malloc(size + 1);
    
    memset(s, 0, size + 1);
    
    fread(s, size, 1, fp);
    
    for(int i = 0; i < size / 2; i++)
    {
        char c = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = c;
    }
    
    fwrite(s, strlen(s), 1, stdout);


    return 0;
}
