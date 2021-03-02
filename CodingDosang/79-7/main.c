//
//  main.c
//  79-7
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>
#include <stdbool.h>

static bool output = true;

static bool getOutoutCondfig(void)
{
    return output;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    if(getOutoutCondfig())
    {
        printf("The Little prince\n");
    }
    
    return 0;
}
