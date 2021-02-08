#include <stdio.h>

int main(void)
{
	int score[4][3][2] = { 0 };

	printf("1회차 시험점수를 입력하세요\n");

	for (int i = 0; i < 4; i++)
	{
		printf("학생%d\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			printf("과목%d:", j + 1);
			scanf("%d", &score[i][j][0]);
		}
	}

	printf("2회차 시험점수를 입력하세요\n");
	for (int i = 0; i < 4; i++)
	{
		printf("학생%d\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			printf("과목%d:", j + 1);
			scanf("%d", &score[i][j][1]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%4d", score[i][j][0] + score[i][j][1]);
		printf("\n");
	}

	return 0;
}