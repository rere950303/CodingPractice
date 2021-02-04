#include <stdio.h>

int main(void)
{
	int a = 0;
	double b = 0.0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	printf("실수를 입력하세요:");
	scanf("%lf", &b);

	printf("%d 곱하기 3:%d\n", a, a * 3);
	printf("%d 나누기 3:%d\n", a, a / 3);

	printf("%lf 곱하기 3:%lf\n", b, b * 3);
	printf("%lf 나누기 3:%lf\n", b, b / 3);

	printf("%d 곱하기 %lf:%lf\n", a, b, a * b);
	printf("%d 나누기 %lf:%lf\n", a, b, a / b);

	return 0;
}