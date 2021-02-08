#include <stdio.h>

int sump(int n);

int main(void)
{
	int n = 0;

	printf("양의정수를 입력하세요:");
	scanf("%d", &n);

	printf("1부터 %d까지의 합은 %d입니다.", n, sump(n));

	return 0;
}

int sump(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
		sum += i;

	return sum;
}