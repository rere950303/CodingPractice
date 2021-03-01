//
//  main.c
//  71-6
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(FILE *fp)
{
    int size;
    int currPos = ftell(fp);
    
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    
    return size;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *buffur;
    int size;
    
    FILE *fp = fopen("hello.txt", "r");
    
    size = getFileSize(fp);
    buffur = malloc(size + 1);
    memset(buffur, 0, size + 1);
    
    fread(buffur, size, 1, fp);
    
    printf("%s\n", buffur);
    
    fclose(fp);
    
    free(buffur);

    return 0;
}
