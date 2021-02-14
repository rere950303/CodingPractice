#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int a[SIZE] = { 0 };
	int b[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 100;

	for (int i = 0; i < SIZE; i++)
		b[i] = a[4 - i];

	for (int i = 0; i < SIZE; i++)
		printf("a[%d]:%d, b[%d]:%d\n", i, a[i], i, b[i]);

	return 0;
}