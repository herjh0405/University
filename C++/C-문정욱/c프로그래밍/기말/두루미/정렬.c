#include <stdio.h>

int cmp(int v1, int v2)
{
	return v1 > v2;
}

void sort(int a[], int len)
{
	int i, j, t;
	
	for(i=0;i<len;++i) 
		for(j=i+1;j<len;++j)
			if( cmp(a[i],a[j]) ) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

int main(void)
{
	int a[] = {3,1,5,2,9};
	int len = sizeof(a)/sizeof(*a);
	int i;
	
	sort(a, len);
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
		
	return 0;
}
