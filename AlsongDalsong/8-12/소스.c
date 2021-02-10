#include <stdio.h>

int main(void)
{
	char ch = 0;
	int count[10] = { 0 };

	while(ch != EOF)
	{
		ch = getchar();
		count[ch-'0']++;
	}
	printf("숫자 문자의 등장 횟수\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d:", i);
		for (int j = 0; j < count[i]; j++)
			printf(" * ");
		printf("\n");
	}

	return 0;
}