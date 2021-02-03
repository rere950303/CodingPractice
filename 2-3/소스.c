#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("정수1을 입력하세요:");
	scanf("%d", &a);

	printf("정수2을 입력하세요:");
	scanf("%d", &b);

	if (a > b)
		printf("정수2개의 비율:%d%%\n", b*100/a);

	if (a < b)
		printf("정수2개의 비율:%d%%\n", a*100/b);

    if (a==b)
		printf("정수2개의 비율:%d%%\n", 100);

	return 0;
}