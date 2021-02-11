#include <stdio.h>
#include <string.h>
#define LEN 128
#define NUMBER 10

void rev_strings(char s[][128], int n);

int main(void)
{
	char s[NUMBER][LEN] = { "" };
	int count = 0;

	printf("10개 이하의 문자열을 입력하세요($$$$$입력시 중단)\n");
	for (int i = 0; i < NUMBER; i++)
	{
		printf("%d번째 문자열:", i + 1);
		scanf("%s", s[i]);
		count++;
		if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
			break;
	}
	rev_strings(s, count-1);

	for (int i = 0; i < count - 1; i++)
		printf("%s\n", s[i]);

	return 0;
}

void rev_strings(char s[][128], int n)
{
	for (int i = 0; i < n; i++)
		for (unsigned int j = 0; j < (strlen(s[i]) / 2); j++)
		{
			char temp = s[i][j];
			s[i][j] = s[i][strlen(s[i]) - 1 - j];
			s[i][strlen(s[i]) - 1 - j] = temp;
		}
}
