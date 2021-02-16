#include <stdio.h>
#define SIZE 1024

int main(void)
{
	char buf[SIZE] = "";
	char fname1[100] = "";
	char fname2[100] = "";
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;

	printf("특정 파일의 이름을 입력하세요:");
	scanf("%s", fname1);
	printf("내용을 복사할 파일의 이름을 입력하세요:");
	scanf("%s", fname2);

	fp1 = fopen(fname1, "rb");

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
			while (fread(buf, 1, SIZE, fp1) != 0)
			{
				fwrite(buf, 1, SIZE, fp2);
				if (fread(buf, 1, SIZE, fp1) < SIZE)
					break;
			}
			fclose(fp1);
			fclose(fp2);
		}
	}

	return 0;
}