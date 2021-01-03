#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int val;
	unsigned int s;

	s = (unsigned)time(NULL);
	srand(s);

	for (i = 0; i < 5; ++i) {
		val = rand();
		printf("%d ", val);
	}
	printf("\n");

	for (i = 0; i < 5; ++i) {
		val = rand() % 10; // 0 ~ 9
		printf("%d ", val);
	}
	printf("\n");

	return 0;
}