#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int h = 0;

	printf("사다리꼴의 윗변, 밑변, 높이를 정수값으로 순서대로 입력하세요:");
	scanf("%d %d %d", &a, &b, &h);

	double area = (a + b) * h / 2.0;

	printf("사다리꼴의 넓이:%lf", area);

	return 0;
}