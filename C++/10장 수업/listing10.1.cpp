//Listing 10.1 The day_mon1.c Program
/* day_mon1.c -- prints the days for each month */
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	/*
	for (index = 0; index < MONTHS; index++)
		printf("Month %d has %2d days.\n", index + 1, days[index]);
		*/
	index = 0;
	while (index++ < MONTHS) //index ���� �����Ǵ� ���� Ȯ�� �ʿ�
		printf("Month %d has %2d days.\n", index, days[index-1]);

	system("pause");
	return 0;
}
