//
//  main.c
//  54-6
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>
#include <stdlib.h>

union Data {
    short num1;
    int num2;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    union Data *d1 = malloc(sizeof(union Data));
    
    d1->num2 = 1;
    
    printf("%d %d\n", d1->num1, d1->num2);
    
    free(d1);
    
    return 0;
}
