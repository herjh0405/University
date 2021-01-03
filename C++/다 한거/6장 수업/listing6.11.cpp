// Listing 6.11 The sweetie2.c Program
// sweetie2.c -- a counting loop using for
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int NUMBER = 10;
	int count;
	for (count = 1; count <= NUMBER; count++)
		printf("count= %d, Be my Valentine!\n", count);
	system("pause");
	return 0;
}
