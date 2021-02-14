#include <stdio.h>

int print_success(int b[]);

int main(void)
{
	int student[7] = { 0 };

	for (int i = 0; i < 7; i++)
	{
		printf("학생%d의 점수를 입력하세요:", i + 1);
		scanf("%d", &student[i]);
	}
	
	printf("합격자 목록\n\n");
	print_success(student);

	return 0;
}

int print_success(int b[])
{
	for (int i = 0; i < 7; i++)
		if (b[i] >= 60)
			printf("학생%d:%d\n", i + 1, b[i]);

	return 0;
}
