#include <stdio.h>

void ary_set(int v[], int n, int val);

int main(void)
{
	int s[10] = { 0 };

	ary_set(&s[2], 2, 99);

	for (int i = 0; i < 10; i++)
		printf("s[%d]: %d\n", i, s[i]);

	return 0;
}

void ary_set(int v[], int n, int val)
{
	for (int i = 0; i < n; i++)
		v[i] = val;
}
