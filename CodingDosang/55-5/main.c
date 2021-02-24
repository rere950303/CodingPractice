//
//  main.c
//  55-5
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>
#include <string.h>

struct Stats {
    float health;
    float healthRegen;
    unsigned int mana;
    float mamRegen;
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
    struct Champion lux;
    
    strcpy(lux.name, "Lux");
    lux.stats.health = 477.72f;
    lux.stats.healthRegen = 1.08f;
    lux.stats.mana = 334;
    lux.stats.mamRegen = 1.24f;
    lux.stats.range = 550;
    lux.stats.attackDamage = 55.5f;
    lux.stats.armor = 0.625f;
    lux.stats.attackSpeed = 18.72f;
    lux.stats.magicResist = 30;
    lux.stats.movementSpeed = 330;
    lux.abilityPower = 0;
    
    printf("%u %f\n", lux.stats.mana, lux.stats.mamRegen);

    return 0;
}
