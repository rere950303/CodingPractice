#include <stdio.h>
#define SIZE 50
#define Fail -1

int search_idx(const int v[], int idx[], int key, int n);

int main(void)
{
	int x1[SIZE] = { 0 };
	int x2[SIZE] = { 0 };
	int number = 0;
	int ky = 0;

	printf("몇개의 정수를 입력하시겠습니까?:");
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		printf("%d번째 정수:", i + 1);
		scanf("%d", &x1[i]);
	}

	printf("찾고자 하는 정수를 입력하세요:");
	scanf("%d", &ky);

	int count = search_idx(x1, x2, ky, number);

	if (count == Fail)
		printf("탐색에 실패했습니다.");
	else
	{
		printf("%d은 %d개있습니다.\n", ky, count);
		for (int i = 0; i < count; i++)
			printf("x1[%d]=%d\n", x2[i], ky);
	}
	
	return 0;
}

int search_idx(const int v[], int idx[], int key, int n)
{
	int count = 0;

	for (int i = 0; i < n; i++)
		if (v[i] == key)
			idx[count++] = i;

	if (count == 0)
		return Fail;
	else
		return count;
}
