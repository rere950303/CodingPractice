//
//  main.c
//  47-3
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    long long num1 = 0;
    char text[30] = "";
    
    printf("정수를 입력하세요: ");
    scanf("%lld", &num1);
    
    sprintf(text, "%lld", num1);
    
    unsigned long length = strlen(text);
    
    bool isPalindrome = true;
    
    int begin = 0;
    unsigned long end = length - 1;
    while(begin < end)
    {
        if(text[begin] != text[end])
        {
            isPalindrome = false;
            break;
        }
        begin++;
        end--;
    }
    
    printf("%d\n", isPalindrome);
    
    return 0;
}
