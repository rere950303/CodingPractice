#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("정수 2개를 입력하세요:");
	scanf("%d %d", &a, &b);

	printf("앞의 값은 뒤의 값의 %lf%%입니다.", a / b * 100.0);

	return 0;
}