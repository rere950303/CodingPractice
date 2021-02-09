#include <stdio.h>
#include <math.h>

unsigned int set_n(unsigned x, int pos, int n);

unsigned int reset_n(unsigned x, int pos, int n);

unsigned int inverse_n(unsigned x, int pos, int n);

int main(void)
{
	unsigned int x = 0;
	int pos = 0;
	int n = 0;

	printf("정수x를 입력하세요:");
	scanf("%u", &x);
	printf("pos:");
	scanf("%d", &pos);
	printf("n:");
	scanf("%d", &n);

	printf("x의 비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((x & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	printf("\n");
	printf("set_n비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((set_n(x, pos, n) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	printf("\n");
	printf("reset_n비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((reset_n(x, pos, n) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	printf("\n");
	printf("inverse_n비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((inverse_n(x, pos, n) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	return 0;
}

unsigned int set_n(unsigned x, int pos, int n)
{
	int a = 0;

	for (int i = pos; i <= pos + n - 1; i++)
		a += pow(2, i);

	return a | x;
}

unsigned int reset_n(unsigned x, int pos, int n)
{
	int a = 0;

	for (int i = pos; i <= pos + n - 1; i++)
		a += pow(2, i);

	return (~a) & x;
}

unsigned int inverse_n(unsigned x, int pos, int n)
{
	int a = 0;

	for (int i = pos; i <= pos + n - 1; i++)
		a += pow(2, i);

	return a ^ x;
}
