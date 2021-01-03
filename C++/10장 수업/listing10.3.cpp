//Listing 10.3 The somedata.c Program
/* some_data.c -- partially initialized array */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main(void)
{
	int some_data[SIZE] = { 1492, 1066 };//초기화되지 않는 element는 0
	int i;
	printf("%2s%14s\n", "i", "some_data[i]");
	for (i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, some_data[i]);
	system("pause");
	return 0;
}
