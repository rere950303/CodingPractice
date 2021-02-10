#include <stdio.h>

int factorial(int n);

int main(void)
{
	int n = 0;
	int f = 1;

	printf("정수를 입력하세요:");
	scanf("%d", &n);

	for (int i = n; i >= 1; i--)
		f *= i;
	printf("%d! = %d\n", n, f);

	printf("재귀호출을 이용하여 구하는 경우: %d", factorial(n));

	return 0;
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
