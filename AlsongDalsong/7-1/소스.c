#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("char형: %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("(unsigned)char형: 0 ~ %u\n", UCHAR_MAX);
	printf("short형: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("(unsigned)short형: 0 ~ %u\n", USHRT_MAX);
	printf("int형: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("(unsigned)int형: 0 ~ %u\n", UINT_MAX);
	printf("long형: %d ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("(unsigned)long형: 0 ~ %lu\n", ULONG_MAX);

	return 0;
}