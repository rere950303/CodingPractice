#include <stdio.h>

int main(void)
{
	int n1 = 0;
	int count = 0;

	do
	{
		printf("양의 정수를 입력하세요:");
		scanf("%d", &n1);

		if (n1 <= 0)
			printf("잘못된 입력입니다.\n");

	} while (n1 <= 0);

	int n2 = n1;

	while (n2 > 0)
	{
		n2 /= 10;
		count++;
	}
	printf("%d은 %d자리 수입니다.", n1, count);

	return 0;
}