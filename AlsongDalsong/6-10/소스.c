#include <stdio.h>
#define SIZE 100

int min_of(const int v[], int n);

int main(void)
{
	int number = 0;
	int v[SIZE] = { 0 };

	printf("몇개의 정수를 입력하시겠습니까?(100개 이하):");
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		printf("%d번째 정수를 입력하세요:", i + 1);
		scanf("%d", &v[i]);
	}

	printf("입력한 정수중 최솟값은 %d입니다.", min_of(v, number));

	return 0;
}

int min_of(const int v[], int n)
{
	int min = v[0];

	for (int i = 1; i < n; i++)
	{
		if (min > v[i])
			min = v[i];
	}

	return min;
}
