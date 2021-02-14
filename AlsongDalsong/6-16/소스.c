#include <stdio.h>

void score1(const int a[4][3][2]);

void score2(const int b[4][3][2]);

void sum(const int c[4][3][2]);

int main(void)
{
	int x[4][3][2] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		printf("학생%d\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			printf("과목%d\n", j + 1);
			for (int k = 0; k < 2; k++)
			{
				printf("%d회차 점수를 입력하세요:\n", k+1);
				scanf("%d", &x[i][j][k]);
			}
		}
	}
	
	printf("1회차 점수\n");
	score1(x);

	printf("1회차 점수\n");
	score2(x);

	printf("점수의 합계\n");
	sum(x);

	return 0;
}

void score1(const int a[4][3][2])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d ", a[i][j][0]);
		printf("\n");
	}
}

void score2(const int b[4][3][2])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d ", b[i][j][1]);
		printf("\n");
	}
}

void sum(const int c[4][3][2])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d ", c[i][j][0] + c[i][j][1]);
		printf("\n");
	}
}
