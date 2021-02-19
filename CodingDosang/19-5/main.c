//
//  main.c
//  19-5
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int balance = 10000;
    int age = 0;
    
    printf("만나이를 입력하세요: ");
    scanf("%d", &age);
    
    if(age >= 7 && age <= 12)
        balance -= 450;
    else if(age >= 13 && age <= 18)
        balance -= 720;
    else
        balance -= 1200;
    
    printf("잔액: %d\n", balance);
    
    return 0;
}
