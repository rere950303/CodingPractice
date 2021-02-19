#include <stdio.h>
#include <math.h>

unsigned int set(unsigned x, int pos);

unsigned int reset(unsigned x, int pos);

unsigned int inverse(unsigned x, int pos);

int main(void)
{
	unsigned int x = 0;
	int pos = 0;

	printf("정수를 입력하세요:");
	scanf("%u", &x);

	printf("pos를 입력하세요:");
	scanf("%d", &pos);

	printf("x의 비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((x & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	printf("\n");
	printf("set비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((set(x, pos) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	printf("\n");
	printf("reset비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((reset(x, pos) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}
	
	printf("\n");
	printf("inverse비트\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((inverse(x, pos) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	return 0;
}

unsigned int set(unsigned x, int pos)
{
	int a = pow(2, pos);

	return a | x;
}

unsigned int reset(unsigned x, int pos)
{
	int a = pow(2, pos);

	return (~a) & x;
}

unsigned int inverse(unsigned x, int pos)
{
	int a = pow(2, pos);

	return a ^ x;
}