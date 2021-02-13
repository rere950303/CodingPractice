/*strcat함수와 strncat함수*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100] = "";
	char s2[100] = "";
	char s3[100] = "xxx";

	printf("문자열 s1을 입력하세요:");
	scanf("%s", s1);
	printf("문자열 s2을 입력하세요:");
	scanf("%s", s2);

	printf("문자열 s1에 s2연결:%s\n", strcat(s1, s2));
	printf("문자열 s1에 s2연결:%s\n", strncat(s3, s2, 1));
	printf("문자열 s1에 s2연결:%s\n", strncat(s3, s2, 3));
	printf("문자열 s1에 s2연결:%s\n", strncat(s3, s2, 5));

	return 0;
}