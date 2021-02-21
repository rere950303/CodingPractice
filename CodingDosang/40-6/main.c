//
//  main.c
//  40-6
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = malloc(sizeof(char) * 10);
    
    printf("문자열을 입력하세요: ");
    scanf("%s", s1);
    
    printf("%s\n", s1);
    
    free(s1);
    
    return 0;
}

