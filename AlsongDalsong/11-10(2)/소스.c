/*strcpy함수와 strncpy함수*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100] = "";
	char s2[100] = "";
	char s3[100] = "xxxxxxxxx";

	printf("문자열 s2를 입력하세요:");
	scanf("%s", s2);

	printf("문자열 s1:%s\n", strcpy(s1, s2));
	printf("문자열 s3:%s\n", strncpy(s3, s2, 3));
	printf("문자열 s3:%s\n", strncpy(s3, s2, 5));
	printf("문자열 s3:%s\n", strncpy(s3, s2, 7));

	return 0;
}