//
//  main.c
//  18-9
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char ch = '\0';
    
    printf("문자 a를 입력하세요: ");
    scanf("%c", &ch);
    
    if(ch == 'a')
        printf("a입니다.\n");
    else
        printf("a가 아닙니다.\n");
    
    return 0;
}
