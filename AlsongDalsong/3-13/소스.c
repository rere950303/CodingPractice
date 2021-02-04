#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	if (0 <= a && a <= 59)
		printf("불가");
	else if (60 <= a && a <= 69)
		printf("가능");
	else if (70 <= a && a <= 79)
		printf("양호");
	else if (80 <= a && a <= 100)
		printf("우수");
	else
		printf("잘못된 값입니다");

	return 0;
}