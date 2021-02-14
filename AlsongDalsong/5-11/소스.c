#include <stdio.h>

int main(void)
{
	int student[6][2] = { 0 };
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < 6; i++)
	{
		printf("학생%d의 국어점수를 입력하세요:", i + 1);
		scanf("%d", &student[i][0]);
	}
	
	for (int i = 0; i < 6; i++)
	{
		printf("학생%d의 수학점수를 입력하세요:", i + 1);
		scanf("%d", &student[i][1]);
	}

	for (int i = 0; i < 6; i++)
		sum1 += student[i][0];

	for (int i = 0; i < 6; i++)
		sum2 += student[i][1];

	printf("국어점수 합계:%d\n수학점수 합계:%d\n", sum1, sum2);
	printf("국어점수 평균:%.1lf\n수학점수 평균:%.1lf\n", (double)sum1 / 6, (double)sum2 / 6);
	printf("전체 학생의 합계:%d\n전체 학생의 평균:%.1lf\n", sum1 + sum2, (double)(sum1 + sum2) / 6);

	printf("학생별 합계점수와 평균점수\n");
	
	for (int i = 0; i < 6; i++)
	{
		printf("학생%d:", i + 1);
		printf("%d,  %.1lf\n", student[i][0] + student[i][1], (double)(student[i][0] + student[i][1]) / 2);
	}
	return 0;
}
