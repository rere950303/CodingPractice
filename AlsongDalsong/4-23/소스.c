#include <stdio.h>

int main(void)
{
	int n = 0;

	printf("정사각형 한변의 길이를 입력하세요:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			printf("* "); 
		printf("\n");
	}
	return 0;
}