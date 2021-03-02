//
//  main.c
//  80-3
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int result = 0;
    
    
    for(int i = 1; i < argc; i++)
    {
        result = result + atoi(argv[i]);
    }
    
    printf("%d\n", result);
    
    return 0;
}
