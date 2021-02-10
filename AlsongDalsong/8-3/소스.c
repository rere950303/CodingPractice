#include <stdio.h>

#define swap(type, a, b) do {type t = a; a = b; b = t;} while(0)

int main(void)
{
	int n1 = 0;
	int n2 = 0;

	printf("정수 n1을 입력하세요:");
	scanf("%d", &n1);
	printf("정수 n2을 입력하세요:");
	scanf("%d", &n2);

	swap(int, n1, n2);
	printf("교환후\nn1=%d\nn2=%d", n1, n2); // call-by-value와 달리 변수 a b뿐만 아니라 n1 n2까지 바뀌는 이유를 모르겠음

	double x1 = 0;
	double x2 = 0;

	printf("실수 x1을 입력하세요:");
	scanf("%lf", &x1);
	printf("실수 x2을 입력하세요:");
	scanf("%lf", &x2);

	swap(double, x1, x2);
	printf("교환후\nx1=%lf\nx2=%lf", x1, x2);

	return 0;
}