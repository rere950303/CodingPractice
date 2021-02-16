#include <stdio.h>

struct xyz {
	int x;
	long y;
	double z;
} s;

struct xyz scan_xyz();

int main(void)
{
	s = scan_xyz();

	printf("s.x: %d\n", s.x);
	printf("s.y: %ld\n", s.y);
	printf("s.z: %lf\n", s.z);

	return 0;
}

struct xyz scan_xyz()
{
	struct xyz temp;

	printf("x를 입력하세요:");
	scanf("%d", &temp.x);
	printf("y를 입력하세요:");
	scanf("%ld", &temp.y);
	printf("z를 입력하세요:");
	scanf("%lf", &temp.z);

	return temp;
}
