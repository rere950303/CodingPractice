#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int average = 0;

	printf("정수1:");
	scanf_s("%d", &a);

	printf("정수2:");
	scanf_s("%d", &b);

	average = (a + b) / 2;

	printf("정수2개의 평균값 부호를 반전한 값: %d", -average);

	return 0;
}