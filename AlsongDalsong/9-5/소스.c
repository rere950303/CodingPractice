#include <stdio.h>

void null_string(char s[]);


int main(void)
{
	char str[100] = "";

	printf("문자열을 입력하세요:");
	scanf("%s", str);

	printf("문자열 s: \"%s\"\n", str);

	null_string(str);

	printf("문자열 s를 빈문자열 \"%s\"로 했습니다.", str);

	return 0;
}

void null_string(char s[])
{
	s[0] = '\0';
}
