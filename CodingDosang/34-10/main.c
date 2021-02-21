//
//  main.c
//  34-10
//
//  Created by hyungwook on 2021/02/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *numPtr1 = NULL;
    int **numPtr2 = NULL;
    int num1 = 0;
    
    scanf("%d", &num1);
    
    numPtr1 = &num1;
    numPtr2 = &numPtr1;
    
    printf("%d\n", **numPtr2);

    return 0;
}
