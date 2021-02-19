#include <stdio.h>

int main(void)
{
	float sum = 0.0;

	for (int i = 0; i <= 100; i++)
		sum += i / 100.0;

	printf("0.0부터 1.0까지 0.01씩 늘린 값의 전체 합계는 %f입니다.", sum);

	return 0;
}