//
//  main.c
//  27-12
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char ch = '\0';
    
    scanf("%c", &ch);
    
    for(char i = ch; i <= 122; i++)
    printf("%c", i);
    
    return 0;
}
