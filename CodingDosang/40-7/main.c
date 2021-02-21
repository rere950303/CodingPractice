//
//  main.c
//  40-7
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = malloc(sizeof(char) * 10);
    char *s2 = malloc(sizeof(char) * 10);
    char *s3 = malloc(sizeof(char) * 10);
    
    printf("3개의 문자열을 입력하세요: ");
    scanf("%s %s %s", s1, s2, s3);
    
    free(s1);
    free(s2);
    free(s3);

    return 0;
}
