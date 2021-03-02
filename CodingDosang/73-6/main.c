//
//  main.c
//  73-6
//
//  Created by hyungwook on 2021/03/02.
//

#include <stdio.h>

void bubble_sort(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int numArr[10];
    
    scanf("%d %d %d %d %d %d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);
    
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);
    }
    printf("\n");

    return 0;
}
