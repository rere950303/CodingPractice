//
//  main.c
//  67-4
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>

void printNumber(int count)
{
    if(count == 4)
        return;
    
    printf("%d\n", count);
    
    printNumber(++count);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int count = 1;
    
    printNumber(count);

    return 0;
}
