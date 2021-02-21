//
//  main.c
//  41-7
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[30] = "";
    char s2[30] = "";

    printf("2개의 문자열을 입력하세요: ");
    scanf("%s %s", s1, s2);
    
    printf("%d\n", strcmp(s1, s2));
    
    return 0;
}
