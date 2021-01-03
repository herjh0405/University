#include <stdio.h>
#include <stdlib.h>

int* f(void)
{
	int *p;		// lcal variable, stack area
	int sz, i;  // lcal variable, stack area

	scanf("%d", &sz);
	p = (int*)malloc(4 * sz); // heap area

	for (i = 0; i < sz; ++i)
		scanf("%d", &p[i]);

	printf("size=%d: ", sz);
	for (i = 0; i < sz; ++i)
		printf("%d ", p[i]);
	printf("\n");
	return p;
} 

int main(void)
{
	int* q;
	q = f();

	free(q); // void free(void*);
	return 0;
}