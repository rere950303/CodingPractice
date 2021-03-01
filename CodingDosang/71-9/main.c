//
//  main.c
//  71-9
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
    
    fseek(fp, currPos, SEEK_SET);
    
    return size;
}

char *getData(int offset, int size, int *count, FILE *fp)
{
    fseek(fp, offset, SEEK_SET);
    
    char *s;
    memset(s, 0, size + 1);
    
    count = fread(s, sizeof(char), size, fp);
    
    return s;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *buffur;
    int size;
    int count;
    
    FILE *fp = fopen("words.txt", "r");
    
    size = getFileSize(fp);
    buffur = getData(0, size, &count, fp);
    
    printf("%s\n", buffur);
    printf("%d", count);
    
    fclose(fp);
    
    free(buffur);

    return 0;
}
