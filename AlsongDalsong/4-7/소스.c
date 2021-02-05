#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 2;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	if (a >= 1)
	{
		while (i <= a)
		{
			printf("%d ", i);
			i = i * 2;
		}
	}
	return 0;
}