//
//  main.c
//  58-13
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stats {
    float health;
    float healthRegen;
    unsigned int mana;
    float manaRegen;
    float range;
    float attackDamage;
    float armor;
    float attackSpeed;
    float magicResist;
    unsigned int movementSpeed;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    void *ptr = malloc(sizeof(struct Stats));
    struct Stats st;
    
    scanf("%u %u", &st.mana, &st.movementSpeed);
    
    memcpy(ptr, &st, sizeof(struct Stats));
    st.mana = 0;
    st.movementSpeed = 0;
    
    printf("%u\n%u\n", ((struct Stats *)ptr)->mana, ((struct Stats *)ptr)->movementSpeed);
    
    free(ptr);
    
    return 0;
}
