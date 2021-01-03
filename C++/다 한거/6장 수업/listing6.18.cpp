// Listing 6.18 The rows2.c Program
// rows2.c -- using dependent nested loops
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int ROWS = 3;
	const int CHARS = 3;
	int row;
	char ch;
	for (row = 0; row < ROWS; row++)
	{
		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
			printf("ch= %c\t", ch);
		printf("\n");
	}
	system("pause");
	return 0;
}
