#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	
	printf("정수 2개를 입력하세요:");
	scanf("%d %d", &a, &b);

	int max = (a > b) ? a : b;
	int min = (a < b) ? a : b;

	if (a == b)
		printf("두 값은 같습니다.");
	else
		printf("큰값:%d\n작은값:%d", max, min);

	return 0;
}