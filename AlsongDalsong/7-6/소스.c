/*관계연산자가 비트단위연산자보다 우선순위이고 비트단위연산자의 경우 좌결합성이다!*/
#include <stdio.h>

int main(void)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;

	printf("a:");
	scanf("%u", &a);
	printf("b:");
	scanf("%u", &b);
	printf("c:");
	scanf("%u", &c);

	printf("a & b == b & c의 값은 %u입니다.", a & b == b & c);

	return 0;
}
