#include <stdio.h>
#include <stdlib.h>

int* f(int sz)
{
	int *p;		// lcal variable, stack area
	int i;  // lcal variable, stack area

	p = (int*)malloc(4 * sz); // heap area

	for (i = 0; i < sz; ++i)
		scanf("%d", &p[i]);

	return p;
}

int main(void)
{
	int* q;
	int sz, i;

	scanf("%d", &sz);

	q = f(sz);

	printf("size=%d: ", sz);
	for (i = 0; i < sz; ++i)
		printf("%d ", q[i]);
	printf("\n");

	free(q); // void free(void*);
	return 0;
}