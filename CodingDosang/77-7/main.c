//
//  main.c
//  77-7
//
//  Created by hyungwook on 2021/03/02.
//

#include "calc.h"
#include "print.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    CALC_DATA data;
    data.operand1 = 2;
    data.operand2 = 3;
    
    mul(&data);
    print(&data);
    
    return 0;
}
