#include <stdio.h>

void put_string(const char* s);

int main(void)
{
	char s[100] = "";

	printf("문자열 s를 입력하세요:");
	scanf("%s", s);

	printf("문자열 s의 출력:");
	put_string(s);

	return 0;
}

void put_string(const char* s)
{
	for (int i = 0; *(s + i) != 0; i++)
		printf("%c", *(s + i));
}
