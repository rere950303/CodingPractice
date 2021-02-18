//
//  main.c
//  7-10
//
//  Created by hyungwook on 2021/02/18.
//

#include <stdio.h>
#include <stdint.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    int32_t num3 = INT32_MAX;
    uint64_t num4 = UINT64_MAX;
    
    printf("%d %u %d %llu\n", num1, num2, num3, num4);
    
    return 0;
}
