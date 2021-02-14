#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("문자형 자료형인 char의 비트수:%d\n", CHAR_BIT);
	printf("char:%d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char:0 ~ %u\n", UCHAR_MAX);

	return 0;
}