#include <stdio.h>

int adjust_point(int* n);

int main(void)
{
	int* p = NULL;
	int n = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &n);

	p = &n;

	printf("입력한 정수는 %d입니다.", adjust_point(p));

	return 0;
}

int adjust_point(int* n)
{
	if (*n > 100)
		return 100;
	else if (*n < 0)
		return 0;
	else
		return *n;
}
