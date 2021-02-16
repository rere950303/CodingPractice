#include <stdio.h>
#include <time.h>

int main(void)
{
	FILE* fp = NULL;
	char fname[100] = "";
	int year = 0, month = 0, day = 0, h = 0, m = 0, s = 0;
	char feeling[100] = "";
	time_t t = time(NULL);
	struct tm *p = localtime(&t);

	printf("파일명을 입력하세요:");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp == NULL)
	{
		printf("이전에 설정된 기분이 없습니다.\n");

		fp = fopen(fname, "w");

		if (fp == NULL)
			printf("파일을 열수 없습니다.");
		else
		{
			printf("지금 기분을 입력하세요:");
			scanf("%s", feeling);
			fprintf(fp, "%d %d %d %d %d %d", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
			fprintf(fp, "%s", feeling);
		}
		fclose(fp);
	}
		
	else
	{
		fscanf(fp, "%d %d %d %d %d %d %s", &year, &month, &day, &h, &m, &s, feeling);
		printf("%d년 %d월 %d일 %d시 %d분 %d초의 기분은 %s였습니다.", year, month, day, h, m, s, feeling);
	}
	fclose(fp);

	return 0;
}