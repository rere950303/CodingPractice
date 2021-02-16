#include <stdio.h>

int main(void)
{
	char fname[100] = "";
	int count = 0;
	FILE* fp = NULL;

	printf("파일 이름을 입력하세요:");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp == NULL)
		printf("파일을 열수 없습니다.");
	else
	{
		while (fgetc(fp) != EOF)
		{
			if (fgetc(fp) == '\n')
				count++;
		}
		printf("해당 파일에는 줄 바꿈 문자가 %d개 있습니다.", count);
		fclose(fp);
	}

	return 0;
}