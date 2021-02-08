#include <stdio.h>
#define STUDENT 100

int main(void)
{
	int number = 0;
	int score[STUDENT] = { 0 };

	printf("학생수를 입력하세요(100명이하):");
	scanf("%d", &number);

	printf("학생의 점수를 입력하세요\n");

	for (int i = 0; i < number; i++)
	{
		printf("%d번째 학생의 점수:", i + 1);
		scanf("%d", &score[i]);
	}
	
	for (int i = 0; i <= 9 ; i++)
	{
		printf("%d점 ~ %d점:", i * 10, i*10 + 9);
		{
			for (int j = 0; j < number; j++)
			if (score[j] >= i * 10 && score[j] <= i * 10 + 9)
				printf("* ");}
		printf("\n");
	}
	
	printf("100점:");

	for (int i = 0; i < number; i++)
	{
		{
			if (score[i] == 100)
			printf("* "); }
	}

	return 0;
}