#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("정수x를 입력하세요:");
	scanf("%d", &x);

	printf("정수y를 입력하세요:");
	scanf("%d", &y);

	printf("x == y:%d\n", x == y);
	printf("x != y:%d\n", x != y);
	printf("x > y:%d\n", x > y);
	printf("x < y:%d\n", x < y);
	printf("x >= y:%d\n", x >= y);
	printf("x <= y:%d\n", x <= y);

	return 0;
}