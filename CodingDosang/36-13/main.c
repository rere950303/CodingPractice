//
//  main.c
//  36-13
//
//  Created by hyungwook on 2021/02/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int numArr[5] = {0};
    int smallestNumber = numArr[0];
    
    scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4 - i; j++)
        {
            if(numArr[j] > numArr[j + 1])
            {
                int temp = numArr[j];
                numArr[j] = numArr[j + 1];
                numArr[j + 1] = temp;
            }
        }
    }
    
    smallestNumber = numArr[0];
    printf("%d\n", smallestNumber);
    
    return 0;
}
