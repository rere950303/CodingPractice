//
//  main.c
//  40-8
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = malloc(sizeof(char) * 30);
    char *s2 = malloc(sizeof(char) * 30);
    char *s3 = malloc(sizeof(char) * 30);
    char *s4 = malloc(sizeof(char) * 30);
    
    printf("4개의 문자열을 입력하세요: ");
    scanf("%s %s %s %s", s1, s2, s3, s4);
    
    printf("%s\n%s\n%s\n%s\n", s1, s2, s3, s4);
    
    return 0;
}
