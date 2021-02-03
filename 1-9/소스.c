#include <stdio.h>

int main(void)
{
	int a = 0;
	int result = 10;

	printf("정수를 입력하세요:");
	scanf_s("%d", &a);

	result = a - 6;
	printf("%d에서 6을 빼면 %d입니다.", a, result);

	return 0;
}