// Listing 6.17 The rows1.c Program
/* rows1.c -- uses nested loops */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define CHARS 5
int main(void)
{
	int row;
	char ch;
	for (row = 0; row < ROWS; row++) /* line 10 */
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++) /* line 12 */
			printf("ch = %c\t", ch);
		printf("\n");
	}
	system("pause");
	return 0;
}
