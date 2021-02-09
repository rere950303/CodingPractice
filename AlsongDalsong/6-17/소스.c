#include <stdio.h>

double a1[5];

int main(void)
{
	static double a2[5];

	for (int i = 0; i < 5; i++)
		printf("a1[%d]:%lf\n", i, a1[i]);

	for (int i = 0; i < 5; i++)
		printf("a2[%d]:%lf\n", i, a2[i]);

	return 0;
}



