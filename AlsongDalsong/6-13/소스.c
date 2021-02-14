#include <stdio.h>
#define SIZE 50
#define Fail -1

int searchr(const int v[], int key, int n);

int main(void)
{
	int x[SIZE] = { 0 };
	int number = 0;
	int ky = 0;

	printf("배열 x의 요소를 몇개 입력하시겠습니까?:");
	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		printf("%d번째 정수:", i + 1);
		scanf("%d", &x[i]);
	}

	printf("찾고자 하는 정수를 입력하세요:");
	scanf("%d", &ky);

	if (searchr(x, ky, number) == Fail)
		printf("탐색에 실패했습니다.");
	else
		printf("%d은 %d번째에 있습니다.", ky, searchr(x, ky, number));

	return 0;
}

int searchr(const int v[], int key, int n)
{

	for (int i = n - 1; i >= 0; i--)
	{
		if (v[i] == key)
			return i + 1;
	}

	return Fail;
}