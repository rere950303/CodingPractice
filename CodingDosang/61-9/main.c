//
//  main.c
//  61-9
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

struct Person *allocPerson(void)
{
    struct Person *p = malloc(sizeof(struct Person));
    
    strcpy(p->name, "Kayle");
    p->age = 22;
    
    return p;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Person *p1;
    
    p1 = allocPerson();
    
    printf("%s\n", p1->name);
    printf("%d\n", p1->age);
    
    free(p1);

    return 0;
}
