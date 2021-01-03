#include <stdio.h>

int input(int a[],int max_n)
{
	int i,n;
	
	scanf("%d", &n);
	if(n>max_n)
		n=max_n;
	for(i=0;i<n;++i)
		scanf("%d", &a[i]);
	return n;
}

void print(int a[], int n)
{
	int i;
	
	for(i=0;i<n;++i)
		printf("%d ", a[i]);
	printf("\n");
}

int copy_except(int dst[], int src[],
				int n, int v)
{
	int i,j;
	
	for(i=0,j=0; i<n; ++i)
		if(src[i]!=v)
			dst[j++]=src[i];
	return j;
}

int main(void)
{
	int a[100];
	int b[100];
	int v=99;
	int max_n=100, n1, n2;
	
	n1=input(a,max_n);
	n2=copy_except(b,a,n1,v);
	print(b,n2);
	return 0;
}





