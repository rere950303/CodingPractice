#include <stdio.h>

int str_chr(const char* s, int ch);

int main(void)
{
	char s[100] = "";
	char ch[5] = "";

	printf("문자열s를 입력하세요: ");
	scanf("%s", s);

	printf("찾고자 하는 문자를 입력하세요:");
	scanf("%s", ch);
	
	if (str_chr(s, ch[0]) == -1)
		printf("이 문자는 포함되지 않았습니다.");
	else
		printf("이 문자는 %d번째 들어 있습니다", str_chr(s, ch[0]));

	return 0;
}

int str_chr(const char* s, int ch)
{
	for (int i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) == ch)
			return i + 1;
	}

	return -1;
}