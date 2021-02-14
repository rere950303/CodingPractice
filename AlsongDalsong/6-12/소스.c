#include <stdio.h>
#define SIZE 100

void intary_rcpy(int v1[], const int v2[], int n);

int main(void)
{
	int number = 0;
	int x1[SIZE] = { 0 };
	int x2[SIZE] = { 0 };

	printf("몇개의 정수를 입력하시겠습니까?");
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		printf("%d번째 정수:",i + 1);
		scanf("%d", &x2[i]);
	}

	printf("배열x2의 요소\n");
	for (int i = 0; i < number; i++)
		printf("x2[%d]:%d\n", i, x2[i]);

	printf("반전 후의 배열x1의 요소\n");
	intary_rcpy(x1, x2, number);
	for (int i = 0; i < number; i++)
		printf("x1[%d]=%d\n", i, x1[i]);

	return 0;
}

void intary_rcpy(int v1[], const int v2[], int n)
{
	for (int i = 0; i < n; i++)
		v1[i] = v2[n - 1 - i];
}
