#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = 0;
	int i = 1;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &n);

	for (i; i <= n; i++)
		sum += i;

	printf("1부터%d가지의 합은 %d입니다.", n, sum);

	return 0;
}