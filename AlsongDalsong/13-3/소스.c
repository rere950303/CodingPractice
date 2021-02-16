#include <stdio.h>

int main(void)
{
	double sum_h = 0.0;
	double sum_w = 0.0;
	int count = 0;
	FILE* fp = NULL;
	char fname[50] = "";
	struct student {
		char name[100];
		double height;
		double weight;
	};
	struct student list[10];
	struct student s;

	printf("개인데이터 파일의 이름을 입력하세요:");
	scanf("%s", fname);

	fp = fopen(fname, "w");

	if (fp == NULL)
		printf("파일 열기 실패");
	else
		for (int i = 0; i < 10; i++)
		{
			printf("학생%d의 이름을 입력하세요(종료시 $$$을 입력하세요):", i + 1);
			scanf("%s", list[i].name);
			count++;
			if (list[i].name[0] == '$' && list[i].name[1] == '$' && list[i].name[2] == '$' && list[i].name[3] == '\0')
				break;
			printf("학생%d의 키를 입력하세요:", i + 1);
			scanf("%lf", &list[i].height);
			sum_h += list[i].height;
			printf("학생%d의 몸무게를 입력하세요:", i + 1);
			scanf("%lf", &list[i].weight);
			sum_w += list[i].weight;
			fprintf(fp, "%s, %lf, %lf\n", list[i].name, list[i].height, list[i].weight);
		}
	fclose(fp);

	fp = fopen(fname, "r");

	for (int i = 0; i < count - 2; i++)
		for (int j = 0; j < count - 2 - i; j++)
			if (list[j].height > list[j + 1].height)
			{
				s = list[j];
				list[j] = list[j + 1];
				list[j + 1] = s;
			}

	if (fp == NULL)
		printf("파일 열기 실패");
	else
		for (int i = 0; i < count - 1; i++)
			printf("학생%d: %s, %.1lf, %.1lf\n", i + 1, list[i].name, list[i].height, list[i].weight);

	printf("평균키: %.1lf, 평균 몸무게: %.1lf", sum_h / (count - 1), sum_w / (count - 1));

	fclose(fp);

	return 0;
}