// Listing 6.3 The while1.c Program
/* while1.c -- watch your braces */
/* bad coding creates an infinite loop */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	while (n < 3) //infinite loop
		printf("n is %d\n", n);
		n++;
	printf("That's all this program does\n");
	system("pause");
	return 0;
}
