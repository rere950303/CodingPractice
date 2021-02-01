#include <stdio.h>

void result_print1()
{
	int a;
	a = 15;
	printf("%d", a);
}

void result_print2()
{
	int b = 15;
	printf("%d", b);
}

int main(void)
{
	result_print1();
	result_print2();
	return 0;
}