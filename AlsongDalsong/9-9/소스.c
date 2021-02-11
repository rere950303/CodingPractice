#include <stdio.h>

void put_stringr(const char s[]);

int main(void)
{
	char s[100] = "";

	printf("문자열 s를 입력하세요:");
	scanf("%s", s);

	printf("문자열 s를 거꾸로 출력\n");
	put_stringr(s);

	return 0;
}

void put_stringr(const char s[])
{
	int count = 0;

	for (int i = 0; s[i] != 0; i++)
		count++;

	for (int i = count-1; i >= 0; i--)
		printf("%c", s[i]);
}
