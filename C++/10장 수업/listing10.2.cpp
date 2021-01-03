//Listing 10.2 The no_data.c Program
/* no_data.c -- uninitialized array */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main(void)
{
	int no_data[SIZE]; /* uninitialized array */
	int i;
	int x;

	printf("this is x :%d\n");
	printf("%2s%14s\n", "i", "no_data[i]");
	for (i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, no_data[i]);//초기화되지 않은 배열 사용 경고
	system("pause");
	return 0;
}
