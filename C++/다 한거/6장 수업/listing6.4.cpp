// Listing 6.4 The while2.c Program
/* while2.c -- watch your semicolons */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	while (n++ < 3)
		; /* null statement */
	printf("n is %d\n", n); /* line 8 */
	printf("That's all this program does.\n");
	system("pause");
	return 0;
}
