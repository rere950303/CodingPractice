#include <stdio.h>

int main(void)
{
	char s[][5] = {
		"asd",
		"fdf",
		"gdgs"
	};
	char* p[] = { "sdf", "gsg", "gdgs" };

	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
		printf("s[%d]: \"%s\"\n", i, s[i]);

	for(int i = 0; i<sizeof(p)/sizeof(p[0]); i++)
		printf("p[%d]: \"%s\"\n", i, p[i]);

	return 0;
}