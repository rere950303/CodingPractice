#include <stdio.h>

int cube(int x);

int main(void)
{
	int n = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &n);

	printf("%d의 3제곱값은 %d입니다.", n, cube(n));

	return 0;
}

int cube(int x)
{
	return x * x * x;
}