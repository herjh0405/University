// Listing 6.8 The trouble.c Program
// trouble.c -- misuse of =
// will cause infinite loop
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long num;
	long sum = 0L;
	int status;
	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status == 1) //while (status = 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
		printf("num = %ld, status = %ld", num, status);
	}
	printf("Those integers sum to %ld.\n", sum);
	system("pause");
	return 0;
}
