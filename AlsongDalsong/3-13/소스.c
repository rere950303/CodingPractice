#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	if (0 <= a && 59 >= a)
		printf("불가");
	else if (60 <= a && 69 >= a)
		printf("가능");
	else if (70 <= a && 79 >= a)
		printf("양호");
	else if (80 <= a && 100 >= a)
		printf("우수");
	else
		printf("잘못된 값입니다");

	return 0;
}