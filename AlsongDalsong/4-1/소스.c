#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	while (1)
	{
		printf("정수를 입력하세요:");
		scanf("%d", &a);

		if (a > 0)
			printf("양수입니다.\n");
		else if (a < 0)
			printf("음수입니다.\n");
		else
			printf("0입니다.\n");

		printf("반복하시겠습니까?: Y[0] / N[1]\n");
		scanf("%d", &b);

		if (b == 1)
			break;
	}
	return 0;
}