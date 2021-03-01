//
//  main.c
//  71-8
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int count;
    char buffur[5] = {0};
    
    FILE *src = fopen("hello.txt", "r");
    FILE *dest = fopen("hello.txt", "w");
    
    while (feof(src) == 0)
    {
        count = fread(buffur, sizeof(char), 4, src);
        printf("%s", buffur);
        fwrite(buffur, sizeof(char), count, dest);
        memset(buffur, 0, 5);
    }
    
    fclose(dest);
    fclose(src);

    return 0;
}
