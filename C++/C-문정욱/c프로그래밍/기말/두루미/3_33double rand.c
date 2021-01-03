#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXV 33
#define MINV 3
#define RAND_MAX 32767
#define GAPV (MAXV-MINV)

int main(void)
{
	int i;
	double val;
	
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; ++i) { // ( 0.0 ~ 1.1 )
		val = (double)rand() / (double)RAND_MAX*GAPV+MINV;
		printf("%f ", val);
	}
	printf("\n");

	return 0;
}