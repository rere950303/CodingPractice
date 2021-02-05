#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 1;
	int j = 1;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	int n = a / 5;
	int r = a % 5;

	for (i; i <= n; i++)
		printf("*****\n");
	for (j; j <= r; j++)
		printf("*");

	return 0;
}
