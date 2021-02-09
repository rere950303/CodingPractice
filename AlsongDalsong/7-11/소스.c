#include <stdio.h>

int main(void)
{
	int n = 0;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &n);

	printf("8진수: 0%o\n", n);
	printf("16진수: 0x%x", n);

	return 0;
}