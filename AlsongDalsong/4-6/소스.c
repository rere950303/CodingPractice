#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 2;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	for (i; i < +a; i += 2)
		printf("%d ", i);

	return 0;
}