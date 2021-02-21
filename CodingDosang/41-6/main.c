//
//  main.c
//  41-6
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[30] = "";
    
    printf("문자열을 입력하세요: ");
    scanf("%s", s1);
    
    printf("%d\n", strlen(s1));
    
    return 0;
}
