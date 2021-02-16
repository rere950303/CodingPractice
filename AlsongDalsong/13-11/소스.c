#include <stdio.h>
int main(void)
{
	double a[10] = { 0.0 };
	char fname[100] = "";
	FILE* fp = NULL;

	for (int i = 0; i < 10; i++)
	{
		printf("실수를 입력하세요:");
		scanf("%lf", &a[i]);
	}

	printf("이진파일의 이름을 입력하세요:");
	scanf("%s", fname);

	fp = fopen(fname, "wb");

	if (fp == NULL)
		printf("파일을 열 수 없습니다.");
	else
	{
		for (int i = 0; i < 10; i++)
			fwrite(a, sizeof(double), 10, fp);
		fclose(fp);
	}

	fp = fopen(fname, "rb");

	if (fp == NULL)
		printf("파일을 열 수 없습니다.");
	else
	{
		fread(a, sizeof(double), 10, fp);
		for (int i = 0; i < 10; i++)
			printf("a[%d]: %lf\n", i, a[i]);
		fclose(fp);
	}

	return 0;
}
