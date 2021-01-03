//Listing 10.4 The day_mon2.c Program
/* day_mon2.c -- letting the compiler count elements */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const int days[] = { 31,28,31,30,31,30,31,31,30,31};
	// array를 초기화할 때 empty bracket 사용시
	int index;
	printf("sizeof days  = %d, sizeof days[0] = %d\n", sizeof days, sizeof days[0]);
	for (index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("Month %2d has %d days.\n", index + 1, days[index]);
	system("pause");
	return 0;
}
//size of days[0]는 int니까 4고, size of days는 int가 10개니까 40