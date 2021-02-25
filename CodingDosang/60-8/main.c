//
//  main.c
//  60-8
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

void printName(void);
void printOrdinal(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    printName();
    printOrdinal();
    
    return 0;
}

void printName(void)
{
    printf("Beethoven\n");
}

void printOrdinal(void)
{
    printf("9th Symphony\n");
}
