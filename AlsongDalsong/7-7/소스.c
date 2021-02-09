#include <stdio.h>

int main(void)
{
	unsigned int x = 0;	

	printf("부호 없는 정수를 입력하세요:");
	scanf("%u", &x);

	for (int i = 31; i >= 0; i--)
	{
		int a = (1 << i);
		printf("%d", ((x & a) == 0) ? 0 : 1);

		if (i % 8 == 0)
			printf(" ");
	}

	return 0;
}