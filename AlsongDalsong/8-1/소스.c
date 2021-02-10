#include <stdio.h>

#define diff(x,y) ((x - y >= 0) ? x - y : y - x)

int main(void)
{
	int n1 = 0;
	int n2 = 0;

	printf("2개의 정수를 입력하세요:");
	scanf("%d %d", &n1, &n2);

	printf("2개 정수의 차이는 %d입니다.", diff(n1, n2));

	return 0;
}