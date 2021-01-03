// Listing 6.5 The cmpflt.c Program
// cmpflt.c -- floating-point comparisons
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	printf("What is the value of pi?\n");
	scanf("%lf", &response);
	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("fabs(x) = %ld, Try again!\n", fabs(response - ANSWER));
		scanf("%lf", &response);
	}
	printf("Close enough!\n");
	system("pause");
	return 0;
}
