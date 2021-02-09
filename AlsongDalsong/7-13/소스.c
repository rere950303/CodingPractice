#include <stdio.h>

int main(void)
{
	float a = 0.0;
	double b = 0.0;
	long double c = 0.0;

	printf("float형 실수a를 입력하세요:");
	scanf("%f", &a);
	printf("double형 실수b를 입력하세요:");
	scanf("%lf", &b);
	printf("long double형 실수c를 입력하세요:");
	scanf("%Lf", &c);

	printf("a=%f\n", &a);
	printf("b=%lf\n", &b);
	printf("c=%Lf\n", &c);

	return 0;
}