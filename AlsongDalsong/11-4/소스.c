#include <stdio.h>

char* str_copy(char* d, const char* s);

int main(void)
{
	char s1[100] = "";
	char s2[100] = "";

	printf("문자열s을 입력하세요:");
	scanf("%s", s1);

	printf("복사할 문자열을 입력하세요:");
	scanf("%s", s2);

	printf("복사후의 문자열 s:\"%s\"", str_copy(s1, s2));

	return 0;
}

char* str_copy(char* d, const char* s)
{
	for (int i = 0; *(s + i) != 0; i++)
		*(d + i) = *(s + i);

	return d;
}
