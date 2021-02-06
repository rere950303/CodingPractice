#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	int n = a / 5;
	int r = a % 5;

	for (int i = 1; i <= n; i++)
		printf("*****\n");
	for (int j = 1; j <= r; j++)
		printf("*");

	return 0;
}
