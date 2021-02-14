#include <stdio.h>

int main(void)
{
	int a[4][3] = { 0 };
	int b[3][4] = { 0 };
	int c[4][4] = { 0 };

	printf("배열 a의 각요소를 입력하세요\n");

	for(int i = 0; i <=3; i++)
		for (int j = 0; j <= 2; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}

	printf("배열 b의 각요소를 입력하세요\n");

	for (int i = 0; i <= 2; i++)
		for (int j = 0; j <= 3; j++)
		{
			printf("b[%d][%d]:", i, j);
			scanf("%d", &b[i][j]);
		}

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];

	printf("배열c의 값\n");

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			printf("c[%d][%d]=%d\n", i, j, c[i][j]);

	return 0;
}