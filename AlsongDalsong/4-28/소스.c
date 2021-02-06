#include <stdio.h>

int main(void)
{
	int h = 0;

	printf("피라미드의 높이를 입력하세요:");
	scanf("%d", &h);

	int length = (h - 1) * 2 + 1;

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= (length - (2 * i - 1)) / 2; j++)
			printf(" ");
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
	return 0;

}