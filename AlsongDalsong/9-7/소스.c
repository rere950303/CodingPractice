#include <stdio.h>

int str_chnum(const char s[], int c);

int main(void)
{
	char s[100] = "";
	char ch[5] = "";

	printf("문자열s를 입력하세요:");
	scanf("%s", s);

	printf("문자열 s는 \"%s\"입니다.\n", s);

	printf("찾고자 하는 영문자를 입력하세요:");
	scanf("%s", ch);

	printf("찾고자 하는 문자 %c는 %d개 있습니다.", ch[0], str_chnum(s, ch[0]));
	
	return 0;
}

int str_chnum(const char s[], int c)
{
	int count = 0;

	for (int i = 0; s[i] != 0; i++)
		if (s[i] == c)
			count++;

	return count;
}
