#include <stdio.h>

int main(void)
{
	int h = 0;

	printf("몇 단인가요?");
	scanf("%d", &h);

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j < i; j++)
			printf(" ");
		for (int k = 1; k <= 2 * h - 2 * i + 1; k++)
			printf("%d", i);
		printf("\n");
	}
	return 0;
}