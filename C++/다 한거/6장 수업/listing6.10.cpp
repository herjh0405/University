// Listing 6.10 The sweetie1.c Program
// sweetie1.c -- a counting loop
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int NUMBER = 10;
	int count = 1; // initialization
	while (count <= NUMBER) // test
	{
		printf("count=%d, Be my Valentine!\n", count); // action
		count++; // update count
	}
	system("pause");
	return 0;
}
