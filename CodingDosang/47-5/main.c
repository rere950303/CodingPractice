//
//  main.c
//  47-5
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[31] = "";
    char *s2[15] = {NULL};
    char s3[31] = "";
    bool isPalindrome = true;
    int count = 0;
    
    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", s1);
    
    char *ptr = strtok(s1, " ");
    
    while(ptr != NULL)
    {
        if(*ptr != '\0')
            s2[count] = ptr;
        count++;
        ptr = strtok(NULL, " ");
    }
    
    for(int i = 0; i < count; i++)
    {
        strcat(s3, s2[i]);
    }
    
    unsigned long len = strlen(s3);
    int begin = 0;
    unsigned long end = len - 1;
    
    while(begin < end)
    {
        if(s3[begin] != s3[end])
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
