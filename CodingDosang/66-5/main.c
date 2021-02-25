//
//  main.c
//  66-5
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

long long getSum(char *types, ...)
{
    va_list ap;
    int i = 0;
    long long result = 0;
    
    va_start(ap, types);
    while(types[i] != '\0')
    {
        switch(types[i])
        {
            case 's':
                result += atoi(va_arg(ap, char *));
                break;
            case 'i':
                result += va_arg(ap, int);
                break;
            default:
                break;
        }
        i++;
    }
    va_end(ap);
    
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%lld\n", getSum("siis", "12", 30000, 500000, "300"));
    printf("%lld\n", getSum("ssi", "150", "150", 100));

    return 0;
}
