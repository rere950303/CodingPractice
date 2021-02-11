#include <stdio.h>

int str_char(const char s[], int c);


int main(void)
{
	char s[100] = "";
	char ch[5] = "";

	printf("문자열을 입력하세요:");
	scanf("%s", s);

	printf("문자열 s는 \"%s\"입니다.\n", s);

	printf("찾고자 하는 문자를 입력하세요:");
	scanf("%s", ch);


	if (ch[0] >= 65 && ch[0] <= 90)
		printf("찾고자 하는 대문자 %c는 %d번째 있습니다.", ch[0], str_char(s, ch[0]));
	else if (ch[0] >= 97 && ch[0] <= 122)
		printf("찾고자 하는 소문자 %c는 %d번째 있습니다.", ch[0], str_char(s, ch[0]));
	else
		printf("이는 영문자가 아닙니다.");

	return 0;
}

int str_char(const char s[], int c)
{
	for (int i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
			return i + 1;
	}

	return -1;
}
