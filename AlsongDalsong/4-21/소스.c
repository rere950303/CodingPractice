#include <stdio.h>

int main(void)
{
	int area = 0;

	printf("직사각형의 넓이를 입력하세요:");
	scanf("%d", &area);

	for(int width = 1; width * width <= area; width++)
	{
		if (area % width == 0)
			printf("%d x %d\n", width, area / width);
	}
	return 0;
}