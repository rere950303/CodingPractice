#include <stdio.h>
#define SIZE 5

int main(void)
{
	int array[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		array[i] = SIZE - i;
	
	for (int i = 0; i < SIZE; i++)
		printf("array[%d]:%d\n", i, array[i]);

	return 0;
}