//
//  main.c
//  36-12
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int decimal = 0;
    int binary[4] = {1, 1, 0, 1};
    int position = 0;
    
    for(int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
    {
        decimal += binary[i] << position;
        position++;
    }
    
    printf("%d\n", decimal);

    return 0;
}
