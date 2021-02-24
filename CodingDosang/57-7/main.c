//
//  main.c
//  57-7
//
//  Created by hyungwook on 2021/02/24.
//

#include <stdio.h>

typedef enum _Month {
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec,
    MonthCount
} Month;

int main(int argc, const char * argv[]) {
    // insert code here...
    for(Month i = Jan; i < MonthCount; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}
