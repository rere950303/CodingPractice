#include <stdio.h>

int main(void)
{
	int length = 0;
	int width = 0;

	printf("직사각형의 가로와 세로의 길이를 입력하세요:");
	scanf("%d %d", &length, &width);
	if (length > width)
	{
		for (int i = 1; i <= width; i++)
		{
			for (int j = 1; j <= length; j++)
				printf("* ");
			printf("\n");
		}
	}
	else
	{
		for (int i = 1; i <= length; i++)
		{
			for (int j = 1; j <= width; j++)
				printf("* ");
			printf("\n");
		}
	}
	return 0;
}