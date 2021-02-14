#include <stdio.h>

int min3(int a, int b, int c);

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("3개의 정수를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);

	printf("3개의 정수중 가장 작은값은 %d입니다.", min3(a, b, c));

	return 0;
}

int min3(int a, int b, int c)
{
	int min3 = a;

	if (min3 > b)
		min3 = b;
	if (min3 > c)
		min3 = c;

	return min3;
}