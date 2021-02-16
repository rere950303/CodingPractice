#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	char fname[50] = "";
	struct student {
		char name[100];
		double height;
		double weight;
	};
	struct student list[10];

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
			if (list[i].name[0] == '$' && list[i].name[1] == '$' && list[i].name[2] == '$' && list[i].name[3] == '\0')
				break;
			printf("학생%d의 키를 입력하세요:", i + 1);
			scanf("%lf", &list[i].height);
			printf("학생%d의 몸무게를 입력하세요:", i + 1);
			scanf("%lf", &list[i].weight);
			fprintf(fp, "%s, %lf, %lf\n", list[i].name, list[i].height, list[i].weight);
		}
	fclose(fp);

	return 0;
}