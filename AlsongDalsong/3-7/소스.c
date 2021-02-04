#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("정수 3개를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);

	int min = a;

	if (b < min)
		min = b;
	if (c < min)
		min = c;

	printf("최솟값:%d", min);

	return 0;
}