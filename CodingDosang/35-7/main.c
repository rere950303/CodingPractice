//
//  main.c
//  35-7
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 0;
    int num2 = 0;
    
    int *numPtr1 = malloc(sizeof(int));
    int *numPtr2 = malloc(sizeof(int));

    scanf("%d %d", &num1, &num2);
    
    *numPtr1 = num1;
    *numPtr2 = num2;
    
    printf("%d\n", *numPtr1 + *numPtr2);
    
    free(numPtr1);
    free(numPtr2);

    return 0;
}
