#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	printf("{");

	for (int i = 1; i < a; i++)
		printf("%d, ", i);
	
	printf("%d}", a);

	return 0;
}