// Listing 6.7 The truth.c Program
// truth.c -- what values are true?
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 3;
	while (n)
		printf("%2d is true\n", n--);
	printf("%2d is false\n", n);
	n = -3;
	while (n)
		printf("%2d is true\n", n++);
	printf("%2d is false\n", n);
	system("pause");
	return 0;
}
