/*1비트씩 왼쪽으로 이동할 때마다 값이 두배*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned int x = 0;
	int n = 0;

	printf("부호없는 정수 x을 왼쪽으로 n비트 이동합니다\n");
	printf("x:");
	scanf("%u", &x);
	printf("n:");
	scanf("%d", &n);

	unsigned int a = x * pow(2, n);
	unsigned int b = x << n;

	printf("a:x * 2 ^ n= %u\n", a);
	printf("b:x << n= %u\n", b);

	printf("%u에 2의%d제곱을 곱한 값인 a은 %u을 왼쪽으로 %d비트 움직인 값인 b와 같습니다.\n", x, n, x, n);

	unsigned int c = x / pow(2, n);
	unsigned int d = x >> n;

	printf("c:x / (2 ^ n)= %u\n", c);
	printf("d:x >> n= %u\n", d);

	printf("%u에 2의%d제곱을 나눈 값인 c은 %u을 오른쪽으로 %d비트 움직인 값인 d와 같습니다.\n", x, n, x, n);

	return 0;
}