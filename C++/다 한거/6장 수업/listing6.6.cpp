// Listing 6.6 The t_and_f.c Program
/* t_and_f.c -- true and false values in C */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int true_val, false_val;
	true_val = (10 > 2); // value of a true relationship
	false_val = (10 == 2); // value of a false relationship
	printf("true = %d; false = %d \n", true_val, false_val);
	system("pause");
	return 0;
}
