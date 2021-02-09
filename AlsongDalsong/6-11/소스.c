#include <stdio.h>
#define SIZE 100

void rev_intary(int v[], int n);

int main(void)
{
	int number = 0;
	int v[SIZE] = { 0 };

	printf("몇개의 정수를 입력하시겠습니까?");
	scanf("%d", &number);
	
	for (int i = 0; i < number; i++)
	{
		printf("%d번째 정수:", i + 1);
		scanf("%d", &v[i]);
	}

	printf("배열v의 요소\n");
	for (int i = 0; i < number; i++)
		printf("v[%d]=%d\n", i, v[i]);

	printf("배열v의 역순\n");
	rev_intary(v, number);

	return 0;
}

void rev_intary(int v[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int temp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = temp;
	}

	for (int i = 0; i < n; i++)
		printf("v[%d]=%d\n", i, v[i]);
}
