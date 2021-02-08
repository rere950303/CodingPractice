#include <stdio.h>

int min2(int a, int b);

int main(void)
{
	int a = 0;
	int b = 0;

	printf("2개의 정수를 입력하세요:");
	scanf("%d %d", &a, &b);

	printf("2개의 정수 중 더 작은값은 %d입니다.", min2(a, b));

	return 0;
}

int min2(int a, int b)
{
	int min2 = (a < b) ? a : b;

	return min2;
}
