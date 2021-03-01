//
//  main.c
//  70-6
//
//  Created by hyungwook on 2021/03/01.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[20] = "안녕하세요.";
    
    FILE *fp = fopen("hello.txt", "w");
    fputs(s1, fp);
    
    fclose(fp);

    return 0;
}
