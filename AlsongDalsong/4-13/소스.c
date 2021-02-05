#include <stdio.h>

int main(void)
{
	int a = 0;
	int count = 0;


	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	while (a > 0)
	{
		a /= 10;
		count++;
	}
	printf("%d자리 수입니다.", count);
	return 0;
}