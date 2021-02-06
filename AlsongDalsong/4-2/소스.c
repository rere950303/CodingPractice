#include <stdio.h>

int main(void)
{
	int max = 0;
	int min = 0;
	int sum = 0;
	int i = min;

	printf("작은 정수를 입력하세요:");
	scanf("%d", &min);

	printf("큰 정수를 입력하세요:");
	scanf("%d", &max);

	for (i = min; i <= max; i++)
		sum += i;

	printf("%d이상 %d이하 정수값의 합:%d", min, max, sum);

	return 0;
}