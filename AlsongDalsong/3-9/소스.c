#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("정수2개를 입력하세요:");
	scanf("%d %d", &a, &b);

	if (a < b)
		printf("두 값의 차이:%d", b - a);
	else
		printf("두 값의 차이:%d", a - b);

	return 0;
}