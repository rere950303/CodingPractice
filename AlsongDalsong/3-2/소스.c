#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("정수 2개를 입력하세요:");
	scanf("%d %d", &a, &b);

	if (a % b == 0)
		printf("%d는 %d의 약수입니다.", b, a);

	else
		printf("%d는 %d의 약수가 아닙니다.", b, a);

	return 0;
}