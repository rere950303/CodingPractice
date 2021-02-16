#include <stdio.h>

int main(void)
{
	char fname[100] = "";
	FILE* fp = NULL;

	printf("파일의 이름을 입력하세요:");
	scanf("%s", fname);

	fp = fopen(fname, "w");

	if (fp == NULL)
		printf("이 파일의 내용을 삭제할수 없습니다.");
	else
	{
		printf("파일의 내용을 삭제했습니다.");
		fclose(fp);
	}

	return 0;
}