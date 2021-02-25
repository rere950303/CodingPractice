//
//  main.c
//  60-6
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

void printfHostname(void);
void printfIPAddress(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    printfHostname();
    printfIPAddress();
    
    return 0;
}

void printfHostname(void)
{
    printf("Saturn\n");
}

void printfIPAddress(void)
{
    printf("192. 168. 10. 6\n");
}
