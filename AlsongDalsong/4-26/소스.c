#include <stdio.h>

int main(void)
{
	int n = 0;
	int width = 0;

	printf("몇개를 출력할까요:");
	scanf("%d", &n);
	printf("몇개마다 줄을 바꿀까요?:");
	scanf("%d", &width);

	for (int i = 1; i <= n / width; i++)
	{
		if (i % 2 == 0)
			for (int j = 1; j <= width; j++)
			{
				if (j % 2 == 0)
					printf("+");
				else
					printf("-");
			}
		else
			for (int k = 1; k <= width; k++)
			{
				if (k % 2 == 0)
					printf("-");
				else
					printf("+");
			}
		printf("\n");
	}
	int r = n % width;

	switch (n / width % 2)
	{
	case 0:
		for (int i = 1; i <= r; i++)
		{
			if (i % 2 == 0)
				printf("-");
			else
				printf("+");
		}
		printf("\n");
		break;
	case 1:
		for (int j = 1; j <= r; j++)
		{
			if (j % 2 == 0)
				printf("+");
			else
				printf("-"); 
		}
		printf("\n");
		break;
	}
	return 0;
}