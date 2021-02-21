//
//  main.c
//  41-5
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *s1 = "Pachelbel Canon";
    char *s2 = "Pachelbel Canon";
    
    int ret = strcmp(s1, s2);
    
    printf("%d\n", ret);
    
    return 0;
}
