#include <stdio.h>

void rev_string(char s[]);

int main(void)
{
	char s[100] = "";

	printf("문자열 s를 입력하세요:");
	scanf("%s", s);

	printf("문자열 s를 거꾸로 출력\n");
	rev_string(s);

	return 0;
}

void rev_string(char s[])
{
	int count = 0;

	for (int i = 0; s[i] != 0; i++)
		count++;

	for (int i = 0; i < count / 2; i++)
	{
		int temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}

	printf("\"%s\"", s);
}