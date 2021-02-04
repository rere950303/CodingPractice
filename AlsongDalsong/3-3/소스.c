#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	if (a > 0)
		printf("양수입니다.");
	else if (a < 0)
		printf("음수입니다.");
	else
		printf("0입니다.");

	return 0;
}

