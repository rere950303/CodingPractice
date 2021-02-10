#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
	int x = 0;
	int y = 0;

	printf("2개의 정수를 입력하세요:");
	scanf("%d %d", &x, &y);

	printf("2개 정수의 최대공약수는 %d입니다.", gcd(x, y));

	return 0;
}

int gcd(int x, int y)
{
	int a = 0;

	if (x >= y)
	{
		if (x % y == 0)
			return y;
		else
			a = x % y;
		return gcd(y, a);
	}
	
	else
	{
		if (y % x == 0)
			return x;
		else
			a = y % x;
		return gcd(x, a);
	}
}