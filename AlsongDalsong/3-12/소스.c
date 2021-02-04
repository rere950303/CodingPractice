#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("2개의 정수를 입력하세요:");
	scanf("%d %d", &a, &b);

	int diff = (a - b > 0) ? (a - b) : (b - a);

	if (diff >= 10)
		printf("두 값의 차이는 11이상입니다.");
	else
		printf("두 값의 차이는 10이하입니다.");

	return 0;
}