#include <stdio.h>

char* str_chr(const char* s, int c);

int main(void)
{
	char str[100] = "";
	char ch[10] = "";
	char* p = 0;

	printf("문자열 s를 입력하세요:");
	scanf("%s", str);

	printf("찾고자 하는 문자는:");
	scanf("%s", ch);

	p = str_chr(str, ch[0]);

	if (p == NULL)
		printf("이 문자는 포함되지 않았습니다.");
	else
		printf("이 이후의 문자는 %s입니다.", p);

	return 0;
}

char* str_chr(const char* s, int c)
{
	for (int i = 0; *(s + i) != 0; i++)
	{
		if (*(s + i) == c)
			return (s + i);   //빌드시 'warning C4090: 'return': 'const' 한정자가 서로 다릅니다.' 와 같은 문구가 뜨는데 포인터s의 저장값을 변경한적이 없는데 왜뜨는지 모르겠음. 
	}

	return NULL;
}
