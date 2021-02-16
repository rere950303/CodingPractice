#include <stdio.h>

int main(void)
{
	char fname[100] = "";
	FILE* fp = NULL;
	int count[10] = { 0 };

	printf("파일 이름을 입력하세요:");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp == NULL)
		printf("이 파일을 열 수 없습니다.");
	else
	{
		while (fgetc(fp) != EOF)
			if (fgetc(fp) >= 48 && fgetc(fp) <= 57)
				count[fgetc(fp)-48]++;
		for (int i = 0; i < 10; i++)
			printf("'%d': %d\n", i, count[i]);
		fclose(fp);
	}

	return 0;
}