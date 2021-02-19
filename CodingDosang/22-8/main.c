//
//  main.c
//  22-8
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    bool b1 = false;
    bool b2 = true;
    
    if(b1 != true)
        printf("참\n");
    else
        printf("거짓\n");
    
    printf("%s\n", b2 == false ? "참" : "거짓");
    
    return 0;
}
