// Listing 6.13 The postage.c Program
// postage.c -- first-class postage rates
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int FIRST_OZ = 46; // 2013 rate
	const int NEXT_OZ = 20; // 2013 rate
	int ounces, cost;//comma operator = a sequence point
	printf(" ounces cost\n");
	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++,
		cost += NEXT_OZ) //comma operator
		printf("ounces = %5d, cost/100.0 = $%4.2f\n", ounces, cost / 100.0);
	int x, y, z;
	x = (y = 3, (z = ++y + 2) + 5);
	printf("x = %d, y = %d, z = %d", x, y, z);
	//x,y,z 출력, y++ 사용시도 테스트
	system("pause");
	return 0;
}
