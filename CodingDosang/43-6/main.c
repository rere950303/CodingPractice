//
//  main.c
//  43-6
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int number = 0;
    char name[31] = "";
    char result[40] = "";
    
    scanf("%d %s", &number, name);
    
    sprintf(result, "%dth %s", number, name);
    
    printf("%s\n", result);
    
    return 0;
}
