#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]);

int main(void)
{
	int x1[4][3] = { 0 };
	int x2[3][4] = { 0 };
	int x3[4][4] = { 0 };

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
		{
			printf("배열x1[%d][%d]:", i, j);
			scanf("%d", &x1[i][j]);
		}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
		{
			printf("배열x2[%d][%d]:", i, j);
			scanf("%d", &x2[i][j]);
		}

	mat_mul(x1, x2, x3);

	printf("행렬의 곱\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d  ", x3[i][j]);
		printf("\n");
	}

	return 0;
}

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
}
