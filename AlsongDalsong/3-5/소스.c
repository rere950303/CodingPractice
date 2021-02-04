#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("정수 a를 입력하세요:");
	scanf("%d", &a);

	printf("정수 b를 입력하세요:");
	scanf("%d", &b);

	if (a == b)
		printf("a와b는 같습니다.");
	else if (a > b)
		printf("a는 b보다 큽니다.");
	else
		printf("a는 b보다 작습니다.");

	return 0;
}