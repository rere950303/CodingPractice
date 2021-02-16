#include <stdio.h>
#include <time.h>

int main(void)
{
	char *day[] = { "일", "월", "화", "수", "목", "금", "토" };
	time_t t = time(NULL);
	struct tm* p = localtime(&t);

	printf("현재시간은 %d년 %d월 %d일(%s) %d시 %d분 %d초 입니다.", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday, day[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);

	return 0;
}