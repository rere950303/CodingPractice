#include <stdio.h>

#define max(x, y) (x > y ? x : y)

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	printf("정수 4개를 입력하세요:");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("4개의 정수중 최댓값은 %d입니다.\n", max(max(a, b), max(c, d)));
	printf("4개의 정수중 최댓값은 %d입니다.\n", max(max(max(a, b), c), d));

	return 0;
}