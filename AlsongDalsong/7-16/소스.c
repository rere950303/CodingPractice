#include <stdio.h>

int main(void)
{
	float x = 0.0;

	for (int i = 0; i <= 100; i++)
	{
		printf("x=%lf,  x=%lf\n", x, i / 100.0);
		x += 0.01;
	}

	return 0;
}