/*오른쪽 아래가 직각인 삼각형*/
#include <stdio.h>

int main(void)
{
	int n = 0;

	printf("짧은 변의 길이를 입력하세요:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int k = 1; k <= i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}