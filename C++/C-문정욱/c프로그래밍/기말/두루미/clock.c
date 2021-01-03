#include <stdio.h>
#include <time.h>

void heavy_process(void)
{
	int i, j;
	for (i = 0; i < 100000; ++i)
		for (j = 0; j < 10000; ++j)
			;
}

int main(void)
{
	clock_t beg;
	clock_t end;
	double elapsed;

	beg = clock();
	heavy_process();
	end = clock();
	elapsed = (double)(end - beg) / (double)CLOCKS_PER_SEC;
	printf("%f second(s)\n", elapsed);
	return 0;
}