#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	printf("10을 더한값:%d\n", a + 10);
	printf("10을 뺀값:%d\n", a - 10);
	printf("10을 곱한값:%d\n", a * 10);
	printf("10으로 나눈몫:%d\n", a / 10);
	printf("10으로 나눈 나머지:%d\n", a % 10);

	return 0;
}