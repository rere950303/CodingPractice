/*strcmp함수와 strncmp함수*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100] = "";
	char s2[100] = "";

	printf("문자열 s1을 입력하세요:");
	scanf("%s", s1);
	printf("문자열 s2을 입력하세요:");
	scanf("%s", s2);

	if (strcmp(s1, s2) == 0)
		printf("두 문자열은 동일합니다.\n");
	else
		printf("두 문자열은 상이합니다.\n");

	printf("두 문자열을 3번째 문자까지만 비교하면 ");
	
	if (strncmp(s1, s2, 3) == 0)
		printf("두 문자열은 동일합니다.\n");
	else
		printf("두 문자열은 상이합니다.\n");

	return 0;
}