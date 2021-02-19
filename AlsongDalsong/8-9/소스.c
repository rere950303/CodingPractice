#include <stdio.h>

int combination(int n, int r);

int main(void)
{
	int n = 0;
	int r = 0;

	printf("서로 다른 n개의 정수에서 r개를 뽑아 만든 조합의 개수를 구합니다.\n");

	printf("n:");
	scanf("%d", &n);
	printf("r:");
	scanf("%d", &r);

	printf("조합의 개수는 %d입니다.", combination(n, r));

	return 0;
}

int combination(int n, int r)
{
	if (r == n)
		return 1;
	else if (r == 1)
		return n;
	else
		return (combination(n - 1, r - 1) + combination( n - 1, r));
}