#include <stdio.h>

void alert(int n);

int main(void)
{
	int n = 0;

	printf("경고음 횟수를 입력하세요:");
	scanf("%d", &n);

	alert(n);

	return 0;
}

void alert(int n)
{
	for (int i = 1; i <= n; i++)
		printf("\a");
}
