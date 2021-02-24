//
//  main.c
//  57-9
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

enum masterYiSkill {
    AlphaStrike = 1,
    Meditation,
    WujuStyle,
    Highlander
};

int main(int argc, const char * argv[]) {
    // insert code here...
    enum masterYiSkill skill = Meditation;
    
    switch(skill)
    {
        case AlphaStrike:
            printf("일격 필살\n");
            break;
        case Meditation:
            printf("명상\n");
            break;
        case WujuStyle:
            printf("우주류 검술\n");
            break;
        case Highlander:
            printf("최후의 전사\n");
            break;
        default:
            break;
    }

    return 0;
}
