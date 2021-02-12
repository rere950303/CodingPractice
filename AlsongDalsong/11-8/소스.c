#include <stdio.h>
#include <ctype.h>

void str_toupper(char *s);

void str_tolower(char* s);

int main(void)
{
	char str[100] = "";

	printf("문자열을 입력하세요:");
	scanf("%s", str);

	printf("대문자:");
	str_toupper(str);
	printf("%s\n", str);

	printf("소문자:");
	str_tolower(str);
	printf("%s\n", str);

	return 0;
}

void str_toupper(char* s)
{
	for (int i = 0; *(s + i) != 0; i++)
		if (islower(*(s + i)))
			*(s + i) = toupper(*(s + i));
}

void str_tolower(char* s)
{
	for (int i = 0; *(s + i) != 0; i++)
		if (isupper(*(s + i)))
			*(s + i) = tolower(*(s + i));
}
