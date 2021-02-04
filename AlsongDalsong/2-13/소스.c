#include <stdio.h>

int main(void)
{
	double height = 0.0;
	double weight = 0.0;

	printf("키를 입력하세요:");
	scanf("%lf", &height);

	printf("몸무게를 입력하세요:");
	scanf("%lf", &weight);

	double BMI = weight / ((height / 100) * (height / 100));

	printf("BMI는 %.2lf입니다", BMI);

	return 0;
}