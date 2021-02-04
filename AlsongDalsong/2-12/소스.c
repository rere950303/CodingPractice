#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("키를 입력하세요:");
	scanf("%d", &a);

	printf("표준체중: %.1lf", (a - 100) * 0.9);

	return 0;
}