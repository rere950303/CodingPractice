#include <stdio.h>

int main(void)
{
	char* p = "123";

	printf("p: \"%s\"\n", p);

	p = "456" + 1;

	printf("p: \"%s\"\n", p);

	return 0; // 문자열"456"의 첫 요소인 4를 가리키는 주소값에 1(cahr의 메모리크기인 1바이트)을 더한값이 포인터 p에 저장되므로 4다음 숫자인 5를 가리키는 포인터로 바뀐다.
}