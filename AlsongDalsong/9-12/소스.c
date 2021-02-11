#include <stdio.h>
#include <ctype.h>

void put_upper(const char s[]);

void put_lower(const char s[]);

int main(void)
{
	char s[100] = "";

	printf("문자열 s를 입력하세요:");
	scanf("%s", s);

	printf("대문자:");
	put_upper(s);

	printf("\n");

	printf("소문자:");
	put_lower(s);

	return 0;
}

void put_upper(const char s[])
{
	for (int i = 0; s[i] != 0; i++)
	{
		if (islower(s[i]))
			printf("%c", toupper(s[i]));
		else
			printf("%c", s[i]);
	}
}

void put_lower(const char s[])
{
	for (int i = 0; s[i] != 0; i++)
	{
		if (isupper(s[i]))
			printf("%c", tolower(s[i]));
		else
			printf("%c", s[i]);
	}
}

