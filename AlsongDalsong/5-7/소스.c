#include <stdio.h>
#define SIZE 100

int main(void)
{
	int number = 0;
	int array[SIZE] = { 0 };

	printf("데이터의 수를 입력하세요:");
	scanf("%d", &number);
	
	for (int i = 0; i < number; i++)
	{
		printf("%d번째 데이터를 입력하세요:", i + 1);
		scanf("%d", &array[i]);
	}

	printf("{");

	for (int i = 0; i < number - 1; i++)
		printf("%d, ", array[i]);

	printf("%d}", array[number - 1]);

	return 0;
}