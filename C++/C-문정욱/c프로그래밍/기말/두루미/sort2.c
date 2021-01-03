#include <stdio.h>

void sort(double* a, int len, int (* pf)(double,double))
{
	int i, j;
	double t;  
	
	for(i=0;i<len-1;++i) 
		for(j=i+1;j<len;++j)
			if( pf(a[i],a[j])>0 ) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

int inc(double v1, double v2) 
{
	double diff;
	
	diff = v1-v2;
	if(diff > 0.0) return +1;
	if(diff < 0.0) return -1;
	return 0;
}

int dec(double v1, double v2) 
{
	double diff;
	
	diff = v2-v1;
	if(diff > 0.0) return +1;
	if(diff < 0.0) return -1;
	return 0;
}
 
int main(void)
{
	double a[] = {3.0 , 1.0 , 5.0 , 2.0 , 9.0};
	int len = sizeof(a)/sizeof(*a);
	int i;
	
	sort(a, len, &inc);
	for(i=0;i<len;++i)
		printf("%.2f ", a[i]);
	printf("\n");

	sort(a, len, &dec);
	for(i=0;i<len;++i)
		printf("%.2f ", a[i]);
	printf("\n");
		
	return 0;
}
