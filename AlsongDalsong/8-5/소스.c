#include <stdio.h>

#define SIZE 100

int main(void)
{
	int n = 0;
	int height[SIZE] = { 0 };

	printf("학생수를 입력하세요:");
	scanf("%d", &n);
	
	printf("학생들의 키를 입력하세요\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d번째 학생:", i + 1);
		scanf("%d", &height[i]);
	}

	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (height[j] > height[j + 1])
			{
				int temp = height[j];
				height[j] = height[j + 1];
				height[j + 1] = temp;
			}
		}

	printf("오름차순으로 정렬\n");
	for (int i = 0; i < n; i++)
		printf("%d번: %d\n", i + 1, height[i]);

	return 0;
}