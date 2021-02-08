#include <stdio.h>
#define STUDENT 100

int main(void)
{
	int number = 0;
	int score[STUDENT] = { 0 };
	int dist[11] = { 0 };
	int dist_max = 0;

	printf("학생수를 입력하세요(100명이하):");
	scanf("%d", &number);

	printf("학생의 점수를 입력하세요\n");

	for (int i = 0; i < number; i++)
	{
		printf("%d번째 학생의 점수:", i + 1);
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < number; i++)
		dist[score[i] / 10]++;
	
	for (int i = 0; i < 11; i++)
		if (dist_max < dist[i])
			dist_max = dist[i];

	printf("\n\n\n\n");

	for (int i = dist_max; i >= 1; i--)
	{
		for (int j = 0; j < 11; j++)
		{
			if (dist[j] >= i)
				printf(" * ");
			else
				printf("  ");
		}
		printf("\n");
	}

	for (int i = 1; i < 34; i++)
		printf("-");
	printf("\n");

	for (int i = 0; i <= 10; i++)
		printf("%d ", i * 10);

	return 0;
}