#include <stdio.h>

int ave_of(int a, int b);

int main(void)
{
	int a = 0;
	int b = 0;

	printf("2개의 정수를 입력하세요:");
	scanf("%d %d", &a, &b);

	printf("2개 정수의 평균은 %d입니다.", ave_of(a, b));

	return 0;
}

int ave_of(int a, int b)
{
	return (a + b) / 2;
}