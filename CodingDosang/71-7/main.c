//
//  main.c
//  71-7
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

int readData(char *buffur, int offset, int size, FILE *fp)
{
    int count;
    
    if(feof(fp) == 1)
        return 0;
    
    fseek(fp, offset, SEEK_SET);
    count = fread(buffur, sizeof(char), size, fp);
    
    return count;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char buffur[10] = {0};
    int count;
    
    FILE *fp = fopen("hello.txt", "r");
    
    count = readData(buffur, 9, 3, fp);
    
    printf("%s, count: %d\n", buffur, count);
    
    fclose(fp);
    
    return 0;
}
