#include <stdio.h>

int main(void)
{
	int n = 0;
	struct student {
		char name[100];
		int height;
		float weight;
		long schols;
	};
	struct student list[5];
	struct student temp;

	for (int i = 0; i < 5; i++)
	{
		printf("학생%d의 이름을 입력하세요:", i + 1);
		scanf("%s", list[i].name);
		printf("학생%d의 키를 입력하세요:", i + 1);
		scanf("%d", &list[i].height);
		printf("학생%d의 몸무게를 입력하세요:", i + 1);
		scanf("%f", &list[i].weight);
		printf("학생%d의 장학금을 입력하세요:", i + 1);
		scanf("%ld", &list[i].schols);
	}

	printf("무슨 오름차순으로 정렬하시겠습니까? 키[0] or 몸무게[1]:");
	scanf("%d", &n);

	switch (n)
	{
	case 0:
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4 - i; j++)
				if (list[j].height > list[j + 1].height)
				{
					temp = list[j];
					list[j] = list[j + 1];
					list[j + 1] = temp;
				}
		break;
	case 1:
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4 - i; j++)
				if (list[j].weight > list[j + 1].weight)
				{
					temp = list[j];
					list[j] = list[j + 1];
					list[j + 1] = temp;
				}
		break;
	}

	for (int i = 0; i < 5; i++)
		printf("%s, %d, %f, %ld\n", list[i].name, list[i].height, list[i].weight, list[i].schols);

	return 0;
}