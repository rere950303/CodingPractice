//
//  main.c
//  21-9
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n1 = 0;
    int n2 = 0;
    
    printf("2개의 정수를 입력하세요: ");
    scanf("%d %d", &n1, &n2);
    
    if(n1 && n2)
        printf("참\n");
    else
        printf("거짓\n");
    
    if(n1 || n2)
        printf("참\n");
    else
        printf("거짓\n");
    
    printf("%s\n", !n1 ? "참" : "거짓");
    
    return 0;
}
