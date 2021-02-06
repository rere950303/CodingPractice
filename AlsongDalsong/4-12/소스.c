#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	while (a > 0) {
		b = a % 10;
		a /= 10;
		printf("%d", b);
	}
	return 0;
}
