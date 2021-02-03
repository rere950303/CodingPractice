#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("정수1 입력하세요:");
	scanf("%d", &a);

	printf("정수2 입력하세요:");
	scanf("%d", &b);

	printf("정수3 입력하세요:");
	scanf("%d", &c);

	int add = a + b + c;

	printf("덧셈의 결과:%d", add);

	return 0;
}