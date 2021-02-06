#include <stdio.h>
#define size 5

int main(void)
{
	int array[size] = { 0 };

	for (int i = 0; i <= size - 1; i++)
		array[i] = i;

	for (int j = 0; j <= size - 1; j++)
		printf("array[%d] = %d\n", j, array[j]);

	return 0;
}