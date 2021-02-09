#include <stdio.h>

void put_count(void);

int count = 1;

int main(void)
{
	int number = 0;
	
	printf("호출횟수를 입력하세요:");
	scanf("%d", &number);

	for (int i = 1; i <= number; i++)
		put_count();

	return 0;
}

void put_count(void)
{
	printf("put_count: %d회\n", count);
	count++;
}
