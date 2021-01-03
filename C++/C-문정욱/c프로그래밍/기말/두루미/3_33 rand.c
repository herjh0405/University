#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXV 33
#define MINV 3
#define GAPV (MAXV-MINV+1)
int main(void)
{
	int i;
	int val;
	
	srand((unsigned)time(NULL));

	for (i = 0; i < 5; ++i) {
		val = rand()%GAPV+MINV; // 3~33
		printf("%d ", val);
	}
	printf("\n");

	return 0;
}