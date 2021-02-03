#include <stdio.h>

int main(void)
{
	double a = 0.0;

	printf("실수를 입력하세요:");
	scanf_s("%lf", &a);

	printf("입력받은 실수의 출력:%lf\n", a);

    return 0;
}