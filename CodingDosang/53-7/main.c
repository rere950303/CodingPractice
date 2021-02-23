//
//  main.c
//  53-7
//
//  Created by hyungwook on 2021/02/23.
//

#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Person *p[5];
    struct Person *ptr = NULL;
    
    for(int i = 0; i < 5; i++)
    {
        p[i] = malloc(sizeof(struct Person));
        printf("이름을 입력하세요: ");
        scanf("%s", p[i]->name);
        printf("나이를 입력하세요: ");
        scanf("%d", &p[i]->age);
    }
    
    for(int i = 0; i <  4; i++)
    {
        for(int j = 0; j < 4 - i; j++)
        {
            if(p[j]->age < p[j + 1]->age)
            {
                ptr = p[j];
                p[j] = p[j + 1];
                p[j + 1] = ptr;
            }
        }
    }
    
    printf("%s\n", p[0]->name);
    
    for(int i = 0; i < 5; i++)
    {
        free(p[i]);
    }

    return 0;
}
