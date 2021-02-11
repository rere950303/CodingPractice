#include <stdio.h>
#define NUM 100
#define SIZE 128

int count = 0;

void get_strary(char s[][SIZE], int n);

int main(void)
{
	char s[NUM][SIZE] = { "" };

	printf("100개 이하의 문자열을 입력하세요($$$$$로 종료)\n");
	get_strary(s, NUM);

	for (int i = 0; i < count - 1; i++)
		printf("%s\n", s[i]);

	return 0;
}

void get_strary(char s[][SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d번째 문자열:", i + 1);
		scanf("%s", s[i]);
		count++;
		if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
			break;
	}
}
