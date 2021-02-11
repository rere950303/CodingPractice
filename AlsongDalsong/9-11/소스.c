#include <stdio.h>

void del_digit(char s[]);

int main(void)
{
	char s[100] = "";

	printf("문자열 s를 입력하세요:");
	scanf("%s", s);

	printf("숫자문자를 삭제했습니다.\n");
	del_digit(s);

	return 0;
}

void del_digit(char s[])
{
	for (int i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			for (int j = i; s[j] != 0; j++)
			{
				s[j] = s[j + 1];
				i--;
			}
		}
	}

	printf("%s", s);
}
