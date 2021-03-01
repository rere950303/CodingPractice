//
//  main.c
//  70-8
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char name[31];
    int order;
    
    scanf("%s %d", name, &order);
    
    FILE *fp = stdout;
    
    fprintf(fp, "The %dth Satellite of Jupiter: %s", order, name);
    
    fclose(fp);
    
    return 0;
}
