//Listing 10.9 The day_mon3.c Program
/* day_mon3.c -- uses pointer notation */
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	int* p;
	int num;
	p = days;
	*p = 199;
	p++; //p가 배열의 2번째 주소를 가리킨다
	*p = 299;
	num = *(p + 1);
	printf("num = %d\n", num);

	num = *p + 1;
	printf("num = %d\n", num);
	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1,
			*(days + index)); // days[index]와 같다
	//printf("Month %2d has %d days.\n", index + 1, days[index]); // *(days + index)와 같다
	system("pause");
	return 0;
}
