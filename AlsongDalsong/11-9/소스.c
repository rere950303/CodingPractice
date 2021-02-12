#include <stdio.h>

void del_digit(char* str);

char* p = NULL;

int main(void)
{
	char str[100] = "";

	printf("문자열을 입력하세요:");
	scanf("%s", str);
	del_digit(str);

	printf("숫자문자 삭제후:%s", str);

	return 0;
}

void del_digit(char* str)
{
	p = str;

	for (int i = 0; *(str + i) != 0; i++)
	{
		if (*(str + i) < '0' || *(str + i) > '9')
		{
			*p = *(str + i);
			p++;
		}
	}
	*p = '\0';
}
