//
//  main.c
//  17-8
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 0;
    
    printf("만 나이를 입력하세요:");
    scanf("%d", &n);
    
    if(n<18)
        printf("청소년 관람 불가\n");
    
    return 0;
}
