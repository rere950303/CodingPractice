#include <stdio.h>

struct student {
	char name[100];
	int height;
	int weight;
	long schols;
} s1;

void heeyoon(struct student* std);

int main(void)
{
	printf("이름을 입력하세요:");
	scanf("%s", &s1.name);
	printf("키를 입력하세요:");
	scanf("%d", &s1.height);
	printf("몸무게를 입력하세요:");
	scanf("%d", &s1.weight);
	printf("장학금을 입력하세요:");
	scanf("%ld", &s1.schols);

	heeyoon(&s1);

	printf("이름: %s\n", s1.name);
	printf("키: %d\n", s1.height);
	printf("몸무게: %d\n", s1.weight);
	printf("장학금: %ld\n", s1.schols);

	return 0;
}

void heeyoon(struct student* std)
{
	if (std->height< 180)
		std->height = 180;
	if (std->weight > 80)
		std->weight = 80;
}
