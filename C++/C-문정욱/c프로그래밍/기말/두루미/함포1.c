#include <stdio.h>

void sort(int* a, int len, int (*pf)(int,int))
{
	int i, j, t;
	
	for(i=0;i<len;++i) 
		for(j=i+1;j<len;++j)
			if( pf(a[i],a[j])>0 ) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

int inc(int v1, int v2) 
{
	return v1-v2; //오름차 
}

int dec(int v1, int v2) 
{
	return v2-v1; //내림차 
}

int main(void)
{
	int a[] = {3,1,5,2,9};
	int len = sizeof(a)/sizeof(*a);
	int i;
	
	sort(a, len, &inc);
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");

	sort(a, len, &dec);
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
		
	return 0;
}
