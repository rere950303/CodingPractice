#include <stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int n = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &n);

	printf("%d의 2제곱은 %d이고 4제곱은 %d입니다.", n, sqr(n), pow4(n));

	return 0;
}