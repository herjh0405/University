// Listing 6.9 The boolean.c Program
// boolean.c -- using a _Bool variable
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long num;
	long sum = 0L;
	bool input_is_good;
	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);
	system("pause");
	return 0;
}
