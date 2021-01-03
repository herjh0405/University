#include <stdio.h>

int input(int a[],int max_n)
{
	int i,n;
	
	scanf("%d",&n);
	if(n>=max_n)
		n = max_n;
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

int remove_first(int a[],int n,int v)
{
	int i,j;
	
	for(j=0;j<n&& !(a[j] == v);++j)
		;
	for(i=j+1;i<n;++i)
		a[j++]=a[i];
	return j;
}

int main(void)
{
	int a[100];
	int n,max_n = 100;
	int v=99;
	
	n = input(a,max_n);
	n = remove_first(a,n,v);
	print(a,n);
	return 0;
}

