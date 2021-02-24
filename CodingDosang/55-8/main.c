//
//  main.c
//  55-8
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
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

struct Champion {
    char name[20];
    struct Stats stats;
    float abilityPower;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Champion swain;
    
    strcpy(swain.name, "Swain");
    swain.stats.health = 463.0f;
    swain.stats.healthRegen = 1.48f;
    swain.stats.mana = 290;
    swain.stats.manaRegen = 1.49f;
    swain.stats.range = 500;
    swain.stats.attackDamage = 52.0f;
    swain.stats.armor = 20.0f;
    swain.stats.attackSpeed = 0.625f;
    swain.stats.magicResist = 30;
    swain.stats.movementSpeed = 335;
    swain.abilityPower = 0;
    
    printf("%s %f\n", swain.name, swain.stats.health);

    return 0;
}
