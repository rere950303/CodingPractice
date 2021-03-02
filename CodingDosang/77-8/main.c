//
//  main.c
//  77-8
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>
#include "data.h"
#include "append.h"
#include "print.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    DATA data = {0};
    
    append(&data, "The ", "Little Prince");
    print(&data);
    
    return 0;
}
