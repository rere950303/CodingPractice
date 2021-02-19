//
//  main.c
//  29-9
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char c1 = '\0';
    
    do
    {
        scanf("%c", &c1);
    }while(c1 != 'q');
    
    printf("프로그램 종료\n");
    
    return 0;
}
