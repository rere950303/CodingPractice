//
//  main.c
//  28-11
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int balance = 0;
    
    scanf("%d", &balance);
    
    balance -= 1200;
    
    while(balance >= 0)
    {
        printf("%d\n", balance);
        balance -= 1200;
        
    }
        
    return 0;
}
