#include <stdio.h>

int main(void)
{
	char s[50] = "ABC";

	printf("문자열 s는 \"%s\"입니다.\n", s);

	s[0] = '\0';  // 문자배열의 첫번째 요소를 NULL로 초기화

	printf("빈 문자열 s는 \"%s\"입니다.", s);

	return 0;
}