#include <stdio.h>
#include <time.h>

int main(void)
{
	char fname[100] = "";
	FILE* fp = NULL;
	time_t t = time(NULL);
	struct tm* p = NULL;
	p = localtime(&t);

	printf("이진파일의 이름을 입력하세요:");
	scanf("%s", fname);

	fp = fopen(fname, "rb");

	if (fp == NULL)
		printf("이번이 처음 실행입니다.");
	else
	{
		fread(p, sizeof(struct tm), 1, fp);
		printf("이전에 실행했던 시간은 %d년 %d월 %d일 %d시  %d분 %d초입니다.", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
		fclose(fp);
	}

	fp = fopen(fname, "wb");

	if (fp == NULL)
		printf("파일을 열 수 없습니다.");
	else
	{
		fwrite(p, sizeof(struct tm), 1, fp);
		fclose(fp);
	}

	return 0;
}