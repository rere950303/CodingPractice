#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int array[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		array[i] = rand() % 100;

	printf("반전하기전의 배열:\n");

	for (int i = 0; i < SIZE; i++)
		printf("array[%d]=%d\n", i, array[i]);

	for (int i = 0; i < SIZE / 2; i++)
	{
		int temp = array[i];
		array[i] = array[SIZE - i - 1];
		array[SIZE - i - 1] = temp;
	}
	
	printf("반전한후의 배열:\n");

	for (int i = 0; i < SIZE; i++)
		printf("array[%d]=%d\n", i, array[i]);

	return 0;
}
