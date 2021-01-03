//Listing 10.11 The sum_arr2.c Program
/* sum_arr2.c -- sums the elements of an array */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int sump(int* start, int* end);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;
	answer = sump(marbles, marbles + SIZE);
	printf("marble의 전체갯수는 %ld.\n", answer);
	system("pause");
	return 0;
}
/* use pointer arithmetic */
int sump(int* start, int* end)// sump(int start[], int end[])와 동일하다
{
	int total = 0;
	while (start < end)
	{
		total += *start; // add value to total
		printf("*start = %d\n", *start);
		start++; // advance pointer to next element
	}
	return total;
}
