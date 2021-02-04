#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("정수 3개를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);

	int Min_value1 = (a < b) ? a : b;
	int Min_value2 = (c < Min_value1) ? c : Min_value1;

	printf("최솟값:%d", Min_value2);

	return 0;
}