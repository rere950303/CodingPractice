#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	for (i = a; i >= 0; i--)
		printf("%d ", i);

	return 0;
}