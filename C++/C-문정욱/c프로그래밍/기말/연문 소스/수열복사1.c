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

int removedup(int a[],int n)
{
	int i,j,k;
	
	for(i=0,j=0;i<n;++i) {
		for(k=n-1; k>=i+1 && !(a[i]==a[k]); --k)
			;
		if(k<i+1) 
			a[j++]=a[i];
	}
	return j; 
}


int main(void)
{
	int a[100];
	int max_n=100, n;
	
	n=input(a,max_n);
	n=removedup(a,n);
	print(a,n);
	return 0;
}





