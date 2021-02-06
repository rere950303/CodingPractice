#include <stdio.h>
#define SIZE 5

int main(void)
{
	int array[SIZE] = { 0 };

	for (int i = 0; i <= SIZE - 1; i++)
		array[i] = i;

	for (int j = 0; j <= SIZE - 1; j++)
		printf("array[%d] = %d\n", j, array[j]);

	return 0;
}