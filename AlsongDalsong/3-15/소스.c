#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("짝수입니다.");
	if (a % 2 != 0)
		printf("홀수입니다.");

	return 0;
}