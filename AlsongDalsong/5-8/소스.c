#include <stdio.h>
#define STUDENT 100

int main(void)
{
	int number = 0;
	int score[STUDENT] = { 0 };

	printf("�л����� �Է��ϼ���(100������):");
	scanf("%d", &number);

	printf("�л��� ������ �Է��ϼ���\n");

	for (int i = 0; i < number; i++)
	{
		printf("%d��° �л��� ����:", i + 1);
		scanf("%d", &score[i]);
	}
	
	for (int i = 0; i <= 9 ; i++)
	{
		printf("%d�� ~ %d��:", i * 10, i*10 + 9);
		{
			for (int j = 0; j < number; j++)
			if (score[j] >= i * 10 && score[j] <= i * 10 + 9)
				printf("* ");}
		printf("\n");
	}
	
	printf("100��:");

	for (int i = 0; i < number; i++)
	{
		{
			if (score[i] == 100)
			printf("* "); }
	}

	return 0;
}