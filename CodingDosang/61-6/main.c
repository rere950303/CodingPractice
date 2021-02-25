//
//  main.c
//  61-6
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdbool.h>

int getMana(void)
{
    return 222;
}

float getAttackSpeed(void)
{
    return 0.679f;
}

int isMelle(void)
{
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int mana;
    float attackSpeed;
    bool melee;
    
    mana = getMana();
    attackSpeed = getAttackSpeed();
    melee = isMelle();
    
    printf("%d\n", mana);
    printf("%f\n", attackSpeed);
    printf("%d\n", melee);
    
    return 0;
}
