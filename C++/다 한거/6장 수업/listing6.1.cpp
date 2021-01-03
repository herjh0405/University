// Listing 6.1 The summing.c Program
/* summing.c -- sums integers entered interactively */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long num;
	long sum = 0L; /* initialize sum to zero */
	int status;
	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status == 1) /* == means "is equal to" */
	{
		sum = sum + num;
		printf("\tPlease enter next integer (q to quit): ");
		status = scanf("%ld %ld", &num, &sum);
		printf("\tstatus = %d, num = %ld\n", status, num);
	}
	printf("Those integers sum to %ld.\n", sum);
	system("pause");
	return 0;
}
