#include <stdio.h>
#define SIZE 10

int main(void)
{
	int count = -1;
	char s[SIZE][100] = { "" };

	for (int i = 0; i < SIZE; i++)
	{
		printf("문자열을 입력하세요($$$$$로 중단):");
		scanf("%s", s[i]);
		fflush(stdin);
		count ++ ;

		if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
			break;
	}

	for (int i = 0; i < count; i++)
		printf("%s\n", s[i]);

	return 0;
}