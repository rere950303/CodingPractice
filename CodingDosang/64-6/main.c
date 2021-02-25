//
//  main.c
//  64-6
//
//  Created by hyungwook on 2021/02/25.
//

#include <stdio.h>

void printfReverse(int arr[], int n)
{
    for(int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int numArr[10];
    
    scanf("%d %d %d %d %d %d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);
    
    printfReverse(numArr, sizeof(numArr) / sizeof(int));
    
    return 0;
}
