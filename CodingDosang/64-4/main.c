//
//  main.c
//  64-4
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

void setElements(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = 1.2f;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    float numArr[5];
    
    setElements(numArr, sizeof(numArr) / sizeof(float));
    
    for(int i = 0; i < sizeof(numArr) / sizeof(float); i++)
    {
        printf("%f ", numArr[i]);
    }
    
    printf("\n");

    return 0;
}
