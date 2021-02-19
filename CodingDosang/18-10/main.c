//
//  main.c
//  18-10
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    
    printf("국어 영어 수학 과학 점수를 입력하세요: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    int avg_sum = (n1 + n2 + n3 + n4) / 4;
    
    if((n1 < 0 || n1 > 100) || (n2 < 0 || n2 > 100)|| (n3 < 0 || n3 > 100) || (n4 < 0 || n4 > 100))
        printf("잘못된 입력입니다.\n");
    else if(avg_sum >= 85)
        printf("합격입니다.\n");
    else
        printf("불합격입니다.\n");

    return 0;
}
