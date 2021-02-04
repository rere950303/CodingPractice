#include <stdio.h>

int main(void)
{
	double a = 0.0;
	double b = 0.0;

	printf("실수2개를 입력하세요:");
	scanf("%lf %lf", &a, &b);

	printf("앞의 값은 뒤의 값의 %lf%%입니다.", a / b * 100);

	return 0;
}