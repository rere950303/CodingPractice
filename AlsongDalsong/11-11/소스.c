#include <stdio.h>
#include <string.h>
#include <math.h>

int strtoi(const char* nptr);

long strtol(const char* nptr);

double strtof(const char* nptr);


int main(void)
{
	char s[100] = "";

	printf("정수 문자열을 입력하세요:");
	scanf("%s", s);
	printf("int으로 반환: %d\n", strtoi(s));
	printf("long으로 반환: %ld\n", strtol(s));
	printf("실수 문자열을 입력하세요:");
	scanf("%s", s);
	printf("double으로 반환: %lf\n", strtof(s));

	return 0;
}

int strtoi(const char* nptr)
{
	int x = 0;

	if (*nptr == 45)
	{
		for (unsigned int i = 1; i < strlen(nptr); i++)
			x += (*(nptr + i) - 48) * pow(10, strlen(nptr) - i - 1);
		return -x;
	}

	else
	{
		for (unsigned int i = 0; i < strlen(nptr); i++)
			x += (*(nptr + i) - 48) * pow(10, strlen(nptr) - i - 1);
		return x;
	}
}

long strtol(const char* nptr)
{
	long x = 0;

	if (*nptr == 45)
	{
		for (unsigned int i = 1; i < strlen(nptr); i++)
			x += (*(nptr + i) - 48) * pow(10, strlen(nptr) - i - 1);
		return -x;
	}

	else
	{
		for (unsigned int i = 0; i < strlen(nptr); i++)
			x += (*(nptr + i) - 48) * pow(10, strlen(nptr) - i - 1);
		return x;
	}
}

double strtof(const char* nptr)
{
	double x1 = 0.0;
	double x2 = 0.0;
	int y = 0;
	int count = 0;

	for (int i = 0; *(nptr + i) != 0; i++)
		count++;

	for (int i = 0; i < count; i++)
		if (*(nptr + i) == 46)
			y = i;

	if (*nptr == 45)
	{
		for (int i = 1; i < y; i++)
			x1 += (*(nptr + i) - 48) * pow(10, y - i - 1);
		for (int i = y+1; i < count; i++)
			x2 += (*(nptr + i) - 48) * pow(10, y - i);

		return -(x1 + x2);
	}
	else
	{
		for (int i = 0; i < y; i++)
			x1 += (*(nptr + i) - 48) * pow(10, y - i - 1);
		for (int i = y + 1; i < count; i++)
			x2 += (*(nptr + i) - 48) * pow(10, y - i);

		return x1 + x2;
	}
}


