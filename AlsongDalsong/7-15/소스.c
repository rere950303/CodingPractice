#include <stdio.h>
#include <math.h>

int main(void)
{
	double area = 0;

	printf("정사각형의 넓이를 입력하세요:");
	scanf("%lf", &area);

	printf("정사각형 한 변의 길이는 %lf입니다.", sqrt(area));

	return 0;
}