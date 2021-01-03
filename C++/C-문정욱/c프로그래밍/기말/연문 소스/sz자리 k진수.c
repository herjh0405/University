#include <stdio.h>

void init(int a[], int sz)
{
	int i;
	
	for(i=0; i<sz; ++i)
		a[i]=0;
}

int multi(int k,int sz)
{
	int i, m=1;
	
	for(i=0; i<sz; ++i)
		m *= k;
	return m;
}
void print(int a[], int sz)
{
	int i;
	
	for(i=0;i<sz;++i) 
		printf("%d ", a[i]);
	printf("\n");
}

void next(int a[],int sz, int k)
{
	int i;
	
	for(i=sz-1;i>=0 && !(a[i]!=k-1);--i)
		a[i]=0;
	++a[i];
}

int main(void)
{
	int a[100];
	int sz,k,n;
	int i, j;
	
	scanf("%d%d", &sz,&k);
	init(a, sz);
	n=multi(k,sz);
	for(i=0; i<n; ++i) {
		print(a,sz);
		next(a,sz,k);
	}
	return 0;
}
