#include <stdio.h>

void put_stringn(const char s[], int n);

int main(void)
{
	char str[100] = "";
	int n = 0;

	printf("문자열 s을 입력하세요:");
	scanf("%s", str);

	printf("s를 몇번 출력하시겠습니까?:");
	scanf("%d", &n);

	put_stringn(str, n);

	return 0;
}

void put_stringn(const char s[], int n)
{
	for (int i = 1; i <= n; i++)
		printf("%s", s);
}
