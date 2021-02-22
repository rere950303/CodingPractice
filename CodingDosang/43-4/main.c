//
//  main.c
//  43-4
//
//  Created by hyungwook on 2021/02/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[20] = "";
    
    sprintf(s1, "%dth %s", 9, "Symphony");
    
    printf("%s\n", s1);
    
    return 0;
}
