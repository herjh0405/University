#include <stdio.h>

void prev(int a[],int sz, int k[])
{
	int i;

	for(i=sz-1; i>=0 && !(a[i]!=0) ;--i)
		a[i]=k[i]-1;
	if(i>=0) --a[i];	
}

void print(int a[], int sz)
{
	int i;
	
	for(i=0; i<sz; ++i)
		printf("%d ", a[i]);
	printf("\n");
}

int multi(int sz, int k[])
{
	int i, n=1;
	
	for(i=0; i<sz; ++i)
		n*=k[i];
	return n;
}

int main(void)
{
	int i;	
	int a[100]={0,};
	int k[5];
	int n, sz=5;
	
	for(i=0; i<sz && 
		!(scanf("%d", &k[i])!=1); ++i);
	sz=i;

	n=multi(sz,k);
	
	for(i=0;i<n;++i) {
		prev(a,sz,k);	
		print(a,sz);
	}
	return 0;
}


