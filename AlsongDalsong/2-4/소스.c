#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("정수1을 입력하세요:");
	scanf("%d", &a);

	printf("정수2을 입력하세요:");
	scanf("%d", &b);

	int add = a + b;
	int multiple = a * b;

	printf("두 정수의 합:%d\n", add);
	printf("두 정수의 곱:%d\n", multiple);

	return 0;
}