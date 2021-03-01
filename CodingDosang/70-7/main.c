//
//  main.c
//  70-7
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char c1, c2;
    int x, y;
    
    FILE *fp = fopen("position.txt", "r");
    fscanf(fp, "%c %d %c %d", &c1, &x, &c2, &y);
    
    printf("%d %d\n", x, y);
    
    fclose(fp);

    return 0;
}
