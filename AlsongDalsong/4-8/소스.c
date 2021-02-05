#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 1;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	printf("{");

	for (i; i < a; i++)
		printf("%d, ", i);
	
	printf("%d}", a);

	return 0;
}