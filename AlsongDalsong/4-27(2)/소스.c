/*왼쪽 위가 직각인 삼각형*/
#include <stdio.h>

int main(void)
{
	int n = 0;

	printf("짧은 변의 길이를 입력하세요:");
	scanf("%d", &n);

	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
			printf("*");
		printf("\n");
	}
	return 0;
}