#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("몇월인가요?:");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("겨울입니다.");
		break;
	case 2:
		printf("겨울입니다.");
		break;
	case 3:
		printf("봄입니다.");
		break;
	case 4:
		printf("봄입니다.");
		break;	
	case 5:
		printf("봄입니다.");
		break;
	case 6:
		printf("여름입니다.");
		break;
	case 7:
		printf("여름입니다.");
		break;
	case 8:
		printf("여름입니다.");
		break;
	case 9:
		printf("여름입니다.");
		break;
	case 10:
		printf("가을입니다.");
		break;
	case 11:
		printf("가을입니다.");
		break;
	case 12:
		printf("겨울입니다.");
		break;
	default:
		printf("잘못 입력하였습니다.");
		break;
	}
	return 0;
}