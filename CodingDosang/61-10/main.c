//
//  main.c
//  61-10
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>
#include <stdbool.h>

float getArmor(void)
{
    return 20.5f;
}


bool hasSlowSkill(void)
{
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    float armor;
    bool slow;
    
    armor = getArmor();
    slow = hasSlowSkill();
    
    printf("%f\n", armor);
    printf("%s\n", slow == true ? "ture" : "false");
    
    return 0;
}
