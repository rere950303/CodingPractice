#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	printf("정수4개를 입력하세요:");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int max_value1 = (a > b) ? a : b;
	int max_value2 = (c > max_value1) ? c : max_value1;
	int max_value3 = (d > max_value2) ? d : max_value2;

	printf("최댓값:%d", max_value3);

	return 0;

}