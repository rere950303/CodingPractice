#include <stdio.h>

int main(void)
{
	int count = 0;
	char ch = 0;

	while (ch != EOF)
	{
		ch = getchar();
		if (ch == '\n')
			count++;
	}

	printf("줄 바꿈:%d", count);

	return 0;
}