//
//  main.c
//  20-8
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char ch = '\0';
    
    printf("영문자를 입력하세요: ");
    scanf("%c", &ch);
    
    printf("%s\n", ch == 'k' ? "거짓" : "참");
    printf("%s\n", ch > 'h' ? "참" : "거짓");
    printf("%s\n", ch <= 'o' ? "참" : "거짓");

    return 0;
}
