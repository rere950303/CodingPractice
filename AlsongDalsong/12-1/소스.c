#include <stdio.h>

int main(void)
{
	struct student {
		char name[100];
		int height;
		int weight;
		long schols;
	};

	struct student s1 = { "양형욱", 183, 70, 100 };

	printf("이름:%s(주소:%p)\n", s1.name, &s1.name);
	printf("키:%d(주소:%p)\n", s1.height, &s1.height);
	printf("몸무게:%d(주소:%p)\n", s1.weight, &s1.weight);
	printf("장학금:%ld(주소:%p)\n", s1.schols, &s1.schols);

	return 0;
}