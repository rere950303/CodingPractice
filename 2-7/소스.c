#include <stdio.h>

int main(void)
{
	double r = 0.0;
	double area = 0.0;

	printf("원의 반지름을 입력하세요:");
	scanf("%lf", &r);

	area = 3.14 * r * r;

	printf("원의 넓이:%lf", area);

	return 0;
}