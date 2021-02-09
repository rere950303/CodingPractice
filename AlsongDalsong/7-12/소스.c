/*문제에서는 int형을 요구했으나 예제와 달리 그 MAX값이 지나치게 커 short형으로 풀이*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned short a = 0;
	unsigned short b = 0;

	printf("부호없는 short형 정수의 최댓값은 %u입니다.\n", USHRT_MAX);

	printf("부호없는 정수 a와 b의 값을 입력하세요:");
	scanf("%hu %hu", &a, &b);

	printf("a와 b를 더한값은 자료형으로 표현할 수 있는 최댓값에 1을 더한 값으로 나눈 나머지인 %hu입니다.", a + b);

	return 0;
}