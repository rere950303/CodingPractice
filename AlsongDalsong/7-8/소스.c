#include <stdio.h>

unsigned int rrotate(unsigned x, int n);

unsigned int lrotate(unsigned x, int n);

int main(void)
{
	unsigned int x= 0;
	int n = 0;

	printf("정수를 입력하세요:");
	scanf("%u", &x);

	printf("몇비트를 회전하시겠습니까?:");
	scanf("%d", &n);

	printf("회전하기전\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((x & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	printf("\n");
	printf("오른쪽 회전\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((rrotate(x, n) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	printf("왼쪽 회전\n");
	for (int i = 31; i >= 0; i--)
	{
		int a = (1u << i);
		printf("%d", ((lrotate(x, n) & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	return 0;
}

unsigned int rrotate(unsigned x, int n)
{
	n %= 32;
	int a = x >> n;
	int b = x << (32 - n);

	return a | b;
}

unsigned int lrotate(unsigned x, int n)
{
	n %= 32;
	int a = x << n;
	int b = x >> (32 - n);

	return a | b;
}

