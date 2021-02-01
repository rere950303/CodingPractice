#include <stdio.h>

int main(void)
{
	int a;
	int result;
	printf("정수값을 입력하세요:");
	scanf_s("%d", &a);

	result = a + 12;

	printf("%d에 12를 더하면 %d입니다.", a, result);

	return 0;
}