#include <stdio.h>
#include <math.h>

int main(void)
{
	int n = 0;
	double des_x = 0;
	double des_y = 0;
	double for_x = 0;
	double for_y = 0;
	struct point {
		double x;
		double y;
	};
	
	struct car {
		double fuel;
		struct point p;
	};

	struct car c = { 90.0, {0.0, 0.0} };

	printf("현재 자동차의 좌표는 x=%lf, y=%lf이고 연료는 %lf만큼 있습니다.\n", c.p.x, c.p.y, c.fuel);

	printf("이동할까요?(목적지좌표[0] or 이동거리[1])");
	scanf("%d", &n);

	switch (n)
	{
		case 0:
			printf("목적지의 x와 y의 좌표를 순서대로 입력하세요:");
			scanf("%lf %lf", &des_x, &des_y);
			if (sqrt(pow(des_x - c.p.x, 2) + pow(des_y - c.p.y, 2)) > c.fuel)
				printf("연료가 없습니다.");
			else
				printf("목적지로 이동합니다.");
			break;
		case 1:
			printf("x방향 이동거리와 y방향 이동거리를 순서대로 입력하세요:");
			scanf("%lf %lf", &for_x, &for_y);
			if (sqrt(pow(for_x, 2) + pow(for_y, 2)) > c.fuel)
				printf("연료가 없습니다.");
			else
				printf("목적지로 이동합니다.");
			break;
	}

	return 0;
}