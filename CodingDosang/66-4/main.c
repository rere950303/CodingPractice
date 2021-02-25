//
//  main.c
//  66-4
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdarg.h>

void printStrings(int args, ...)
{
    va_list ap;
    va_start(ap, args);
    for(int i = 0; i < args; i++)
    {
        char *str = va_arg(ap, char *);
        printf("%s ",str);
    }
    va_end(ap);
    
    printf("\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printStrings(2, "C", "Language");
    printStrings(3, "The", "Little", "prince");

    return 0;
}
