#include <stdio.h>

void swap(void* v1, void* v2, int size)
{
	char* p1;
	char* p2;
	char t;
	int i;
	
	p1=(char*)v1;
	p2=(char*)v2;
	
	for(i=0;i<size;++i) {
		t = *p1;
		*p1 = *p2;
		*p2 = t;
}
	
}

void sort(void* a, int len, int size, int (* pf)(void*,void*))
{
	int i, j;

	for(i=0;i<len-1;++i) 
		for(j=i+1;j<len;++j)
			if( pf((char*)a+size*i,(char*)a+size*j)>0 ) //&a[i] == &*(a+i) == a+i
				swap((char*)a+size*i, (char*)a+size*j, size);
}

int inc(void* v1, void* v2) 
{
	double diff;
	
	diff = *(double*)v1-*(double*)v2;
	if(diff > 0.0) return +1;
	if(diff < 0.0) return -1;
	return 0;
}

int dec(void* v1, void* v2) 
{
	double diff;
	
	diff = *(double*)v2-*(double*)v1;
	if(diff > 0.0) return +1;
	if(diff < 0.0) return -1;
	return 0;
}
 
int main(void)
{
	double a[] = {3.0,1.0,5.0,2.0,9.0,7.0};
	int len = sizeof(a)/sizeof(*a);
	int i;
	
	sort(a, len, sizeof(double), &inc);
	for(i=0;i<len;++i)
		printf("%.2f ", a[i]);
	printf("\n");

	sort(a, len, sizeof(double), &dec);
	for(i=0;i<len;++i)
		printf("%.2f ", a[i]);
	printf("\n");
		
	return 0;
}
