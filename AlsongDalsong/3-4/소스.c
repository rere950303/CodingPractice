#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	if (a > 0)
		printf("절댓값:%d", a);
	else if (a < 0)
		printf("절댓값:%d", -a);
	else
		printf("절댓값:0");

	return 0;
}