// Listing 6.12 The for_cube.c Program
/* for_cube.c -- using a for loop to make a table of cubes */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf(" n n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("n=%d,cubed=%5d\n", num, num * num * num);
	system("pause");
	return 0;
}
