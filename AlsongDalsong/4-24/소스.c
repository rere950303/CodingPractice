#include <stdio.h>

void func(int a, int b);

int main(void)
{
	int length = 0;
	int width = 0;

	printf("직사각형의 가로와 세로의 길이를 입력하세요:");
	scanf("%d %d", &length, &width);

	if (length >= width)
		func(width, length);
	else
		func(length, width);

	return 0;
}

void func(int a, int b)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
			printf("* ");
		printf("\n");
	}
}