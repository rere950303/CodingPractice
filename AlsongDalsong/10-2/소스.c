#include <stdio.h>

void decrement_date(int* y, int* m, int* d);

void increment_date(int* y, int* m, int* d);

int main(void)
{
	int y = 0;
	int m = 0;
	int d = 0;
	int n1 = 0;
	int n2 = 0;

	printf("날짜를 입력하세요\n");
	printf("년:");
	scanf("%d", &y);
	printf("월:");
	scanf("%d", &m);
	printf("일:");
	scanf("%d", &d);

	printf("며칠 앞으로 할까요?:");
	scanf("%d", &n1);

	for(int i = 1; i <= n1; i++)
		increment_date(&y, &m, &d);
	printf("%d년 %d월 %d일입니다.\n", y, m, d);

	printf("며칠 뒤으로 할까요?:");
	scanf("%d", &n2);

	for (int i = 1; i <= n1 + n2; i++)
		decrement_date(&y, &m, &d);
	printf("%d년 %d월 %d일입니다.", y, m, d);

	return 0;
}

void increment_date(int* y, int* m, int* d)
{
	if (((*m) == 1 || (*m) == 3 || (*m) == 5 || (*m) == 7 || (*m) == 8 || (*m) == 10) && (*d) == 31)
	{
		(*m)++;
		(*d) = 1;
	}
	else if (((*m) == 4 || (*m) == 6 || (*m) == 9 || (*m) == 11) && (*d) == 30)
	{
		(*m)++;
		(*d) = 1;
	}
	else if ((*m) == 12 && (*d) == 31)
	{
		(*y)++;
		(*m) = 1;
		(*d) = 1;
	}
	else if ((*m) == 2 && ((*y) % 4 == 0 || (*y) % 100 == 0 || (*y) % 400 == 0) && (*d) == 29)
	{
		(*m)++;
		(*d) = 1;
	}
	else if ((*m) == 2 && (*d) == 28)
	{
		(*m)++;
		(*d) = 1;
	}
	else
		(*d)++;
}

void decrement_date(int* y, int* m, int* d)
{
	if (((*m) == 2 || (*m) == 4 || (*m) == 6 || (*m) == 9 || (*m) == 11) && (*d) == 1)
	{
		(*m)--;
		(*d) = 31;
	}
	else if (((*m) == 5 || (*m) == 7 || (*m) == 8 || (*m) == 10 || (*m) == 12) && (*d) == 1)
	{
		(*m)--;
		(*d) = 30;
	}
	else if ((*m) == 1 && (*d) == 1)
	{
		(*y)--;
		(*m) = 12;
		(*d) = 31;
	}
	else if ((*m) == 3 && ((*y) % 4 == 0 || (*y) % 100 == 0 || (*y) % 400 == 0) && (*d) == 29)
	{
		(*m)--;
		(*d) = 29;
	}
	else if ((*m) == 3 && (*d) == 1)
	{
		(*m)--;
		(*d) = 28;
	}
	else
		(*d)--;
}