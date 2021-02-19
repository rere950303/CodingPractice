//
//  main.c
//  18-8
//
//  Created by hyungwook on 2021/02/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int writtenTest = 8;
    int toeic = 870;
    
    if(writtenTest >=80 && toeic>=850)
        printf("합격\n");
    else
        printf("불합격\n");
    
    return 0;
}
