#include <stdio.h>

int main(void)
{
	double height = 0.0;
	double weight = 0.0;

	printf("키를 입력하세요:");
	scanf("%lf", &a);

	printf("몸무게를 입력하세요:");
	scanf("%lf", &b);

	double BMI = b / ((a / 100) * (a / 100));

	printf("BMI는 %.2lf입니다", BMI);

	return 0;
}