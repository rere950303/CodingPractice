#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	printf("5로 나눈몫:%d\n", a / 5);

	printf("5로 나눈 나머지:%d", a % 5);

	return 0;
}