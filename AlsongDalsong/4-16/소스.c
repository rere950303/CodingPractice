#include <stdio.h>

int main(void)
{
	int upper = 0;
	int lower = 0;
	int step = 0;

	printf("키의 시작값을 입력하세요(cm):\n");
	scanf("%d", &lower);
	printf("키의 종료값을 입력하세요(cm):\n");
	scanf("%d", &upper);
	printf("키의 증분을 입력하세요(cm):\n");
	scanf("%d", &step);

	int h = lower;

	while (h <= upper) {
		double std_weight = (h / 100.0) * (h / 100.0) * 22;
		printf("%dcm의 표준몸무게:%.2lf kg\n", h, std_weight);
		h += step;
	}
	return 0;
}