//Listing 10.7 The rain.c Program
/* rain.c -- finds yearly totals, yearly average, and monthly
average for several years of rainfall data */
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12 // number of months in a year
#define YEARS 5 // number of years of data
int main(void)
{
	// initializing rainfall data for 2010 - 2014
	const float rain[YEARS][MONTHS] =
	{
		{ 4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6 },
		{ 8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3 },
		{ 9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4 },
		{ 7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2 },
		{ 7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2 }
	};//5년째 강우량을 월별로 세로가 년, 가로가 월
//int a[2][3]={1,2,3,4,5,6}={{1,2,3},{4,5,6}}
	//a[2][3]의 의미는 3개짜리가 있고 그게 2개 있다라는 것을 의미함-2차원 핵심

	int year, month;
	float subtot, total;
	printf(" 연간 강우량 (인치)\n");
	for (year = 0, total = 0; year < YEARS; year++)
	{ // for each year, sum rainfall for each month
		for (month = 0, subtot = 0; month < MONTHS; month++)
			subtot += rain[year][month];
		printf("%5d %15.1f\n", 2010 + year, subtot);
		total += subtot; // total for all years
	}
	printf("\n연간 강우량은 %.1f 인치.\n\n",
		total / YEARS);
	printf("월별 평균 강우량:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
	printf(" Nov Dec\n");
	for (month = 0; month < MONTHS; month++)
	{ // for each month, sum rainfall over years
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += rain[year][month];
		printf("%4.1f ", subtot / YEARS);
	}
	printf("\n");
	system("pause");
	return 0;
}
//2차원 배열이면 for loop가 2번 돌아감