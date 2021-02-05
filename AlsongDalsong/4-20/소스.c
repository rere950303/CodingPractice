#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 1;
	int count = 0;

	printf("양의 정수를 입력하세요:");
	scanf("%d", &a);

	for (i; i <= a; i++)
		if (a % i == 0)
		{
			printf("%d\n", i);
			count++;
		}
	printf("약수의 개수는 %d개입니다.", count);

	return 0;
}