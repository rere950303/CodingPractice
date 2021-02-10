#include <stdio.h>

#define alert2() printf("\a\a")
#define puts_alert2(str) (alert2(), printf("%s\n", str))

int main(void)
{
	int n = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &n);

	if (n == 0)
	{
		alert2();
		puts_alert2("이수는 0입니다.");
	}
	else
	{
		alert2();
		puts_alert2("이수는 0이 아닙니다.");
	}

	return 0;
}