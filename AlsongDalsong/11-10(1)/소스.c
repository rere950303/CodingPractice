/*strlen함수*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100] = "";

	printf("문자열을 입력하세요:");
	scanf("%s", s);

	printf("문자열 \"%s\"는 길이가 %d입니다.", s, strlen(s));

	return 0;
}