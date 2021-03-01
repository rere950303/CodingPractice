//
//  main.c
//  70-9
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *buffur = malloc(100);
    memset(buffur, 0, 100);
    
    FILE *fp = fopen("words.txt", "r");
    
    fgets(buffur, sizeof(buffur), fp);
    
    printf("%s\n", buffur);
    
    fclose(fp);
    
    free(buffur);

    return 0;
}
