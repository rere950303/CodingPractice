#include <stdio.h>

void sort3(int* n1, int* n2, int* n3);

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("3개의 정수를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);

	sort3(&a, &b, &c);

	printf("오름차순으로 정렬했습니다\n");
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	return 0;
}

void sort3(int* n1, int* n2, int* n3)
{
	int* ap[3] = { n1, n2, n3 };

	for (int i = 0; i < 2; i++)
		if (*(ap[i]) > *(ap[i + 1]))
		{
			int temp = *ap[i];
			*ap[i] = *ap[i + 1];
			*ap[i + 1] = temp;
		}
}
