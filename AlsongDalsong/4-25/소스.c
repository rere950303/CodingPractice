#include <stdio.h>

int main(void)
{
	int no = 0;
	int width = 0;

	printf("* 몇개표시할까요?:");
	scanf("%d", &no);
	printf("몇개마다 줄을 바꿀까요?:");
	scanf("%d", &width);

	for (int i = 1; i <= no / width; i++)
	{
		for (int j = 1; j <= width; j++)
			printf("*");
		printf("\n");
	}
	int r = no % width;

	for (int k = 1; k <= r; k++)
		printf("*\n");

	return 0;
}