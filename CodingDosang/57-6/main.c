//
//  main.c
//  57-6
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

enum VayneSkill {
    Tumble = 1,
    SilverBolts,
    Condemn,
    FinaHour,
};

int main(int argc, const char * argv[]) {
    // insert code here...
    enum VayneSkill skill;
    
    skill = Tumble;
    
    switch(skill)
    {
        case Tumble:
            printf("구르기\n");
            break;
        case SilverBolts:
            printf("은화살\n");
            break;
        case Condemn:
            printf("선고\n");
            break;
        case FinaHour:
            printf("결전의 시간\n");
            break;
        default:
            break;
    }

    return 0;
}
