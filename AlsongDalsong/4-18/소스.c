#include <stdio.h>

int main(void)
{
	int n = 0;
	int i = 1;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &n);

	for (i; i <= n; i++)
		printf("%d의 제곱은 %d\n", i, i * i);

	return 0;
}