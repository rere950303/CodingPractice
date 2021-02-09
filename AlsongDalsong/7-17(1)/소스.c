#include <stdio.h>

int main(void)
{
	float x = 0.0;
	float sum = 0.0;

	for (x = 0; x <= 1.0; x+=0.01)
		sum += x;

	printf("0.0부터 1.0까지 0.01씩 늘린 값의 합계는 %f입니다.", sum);

	return 0;
}