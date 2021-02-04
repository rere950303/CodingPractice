#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("정수 3개를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)  // a == b == c가 안되는 이유가 궁금
		printf("3개 값이 모두 같습니다.");
	else if (a == b || b == c || a == c)
		printf("2개 값이 같습니다.");
	else
		printf("3개 값은 모두 다릅니다.");

	return 0;
}