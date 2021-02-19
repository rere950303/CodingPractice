#include <stdio.h>

int main(void)
{
	enum sex {male, female};
	enum seasons {spring, summer, autumn, winter};

	enum sex sex;
	enum seasons season;

	printf("태어난 계절을 고르세요(봄:0 ~ 겨울:3):");
	scanf("%d", &season);

	printf("셩별을 고르세요(남자:0, 여자:1):");
	scanf("%d", &sex);

	printf("당신은 ");
	switch (sex)
	{
		case male:
			printf("남자로서 ");
			break;
		case female:
			printf("여자로서 ");
			break;
	}

	switch (season)
	{
	case spring:
		printf("봄에 ");
		break;
	case summer:
		printf("여름에 ");
		break;
	case autumn:
		printf("가을에 ");
		break;
	case winter:
		printf("겨울에 ");
		break;
	}
	printf("태어났군요.");
		
	return 0;
}