#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	printf("정수4개를 입력하세요:");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int max_value = (a > b) ? a : b;
	    max_value = (c > max_value) ? c : max_value;
	    max_value = (d > max_value) ? d : max_value;

	printf("최댓값:%d", max_value3);

	return 0;

}