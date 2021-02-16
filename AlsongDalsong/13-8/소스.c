#include <stdio.h>

int main(void)
{
	char fname1[100] = "";
	char fname2[100] = "";
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;

	printf("특정 파일의 이름을 입력하세요:");
	scanf("%s", fname1);
	printf("내용을 복사할 파일의 이름을 입력하세요:");
	scanf("%s", fname2);

	fp1 = fopen(fname1, "r");

	if (fp1 == NULL)
		printf("이 파일을 열 수 없습니다.");
	else
	{
		fp2 = fopen(fname2, "w");

		if (fp2 == NULL)
		{
			printf("복사할 파일을 열 수 없습니다.");
			fclose(fp1);
		}
		else
		{
			while (fgetc(fp1) != EOF)
			{
				printf("%c", fgetc(fp1));
				fputc(fgetc(fp1), fp2);
			}
			fclose(fp1);
			fclose(fp2);
		}
	}

	return 0;
}