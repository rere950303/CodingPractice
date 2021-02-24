//
//  main.c
//  58-9
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Person *p1 = malloc(sizeof(struct Person));
    void *ptr;
    
    strcpy(p1->name, "고길동");
    p1->age = 40;
    
    ptr = p1;
    
    printf("%s %d\n", ((struct Person *)ptr)->name, ((struct Person *)ptr)->age);
    
    free(p1);
    
    return 0;
}
