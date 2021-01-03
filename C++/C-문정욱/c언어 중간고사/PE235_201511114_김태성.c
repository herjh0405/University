#include <stdio.h>

int input(int a[],int max_num)
{
	int i,n;
	
	scanf("%d",&n);
	if(n>=max_num)
		n = max_num;
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	return n;
}

void print(int a[],int n)
{
	int i;
	
	for(i=0;i<n;++i)
		printf("%d ",a[i]);
	printf("\n");
}

void copy(int dst[],int src[],int n)
{
	int i;
	
	for(i=0;i<n;++i)
		dst[i] = src[i];
}
int main(void)
{
	int a[100];
	int b[100];
	int n,max_n = 100;
	
	n = input(a,max_n);
	copy(b,a,n);
	print(b,n);
	return 0;
}

