//
//  main.c
//  22-7
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    bool b1 = true;
    bool b2 = false;
    
    if(b1 && b1)
        printf("참\n");
    else
        printf("거짓\n");
    
    printf("%s\n", b2 || b2 ? "참" : "거짓");
    
    return 0;
}
