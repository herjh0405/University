#include <stdio.h>

int main(void)
{
	double a[3] = {1.1,2.2,3.3};
	int s=sizeof(a)/sizeof(a[0]);
	double* p;
	
	for(p=&a[0];p!=&a[s];++p)
		printf("%.2f ",*p);
	printf("\n");
	return 0;
}

