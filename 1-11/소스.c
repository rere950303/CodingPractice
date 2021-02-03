#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int dup;
	
	
	
	printf("정수1 입력:\n");
	scanf_s("%d", &a);

	printf("정수2 입력:\n");
	scanf_s("%d", &b);

	dup = a * b;

	printf("곱셈결과:%d\n", dup);

	return 0;
}