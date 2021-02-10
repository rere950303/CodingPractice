#include <stdio.h>

int main(void)
{
	enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December};

	enum months month;

	printf("몇월에 태어나셨습니까?");
	scanf("%d", &month);

	printf("당신은 ");
	switch(month)
	{
		case March:
		case April:
		case May:
			printf("봄에 ");
			break;
		case June:
		case July:
		case August:
			printf("여름에 ");
			break;
		case September:
		case October:
		case November:
			printf("가을에 ");
			break;
		case December:
		case January:
		case February:
			printf("겨울에 ");
			break;
	}
	printf("태어나셨군요.");

	return 0;
}