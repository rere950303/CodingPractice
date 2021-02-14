#include <stdio.h>

int main(void)
{
	double a = 0.0;
	int b = 0;

	a = b = 1.5;
	printf("a=%.1lf, b=%d\n", a, b);

	return 0;
}