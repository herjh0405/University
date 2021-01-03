#include <stdio.h>

void sort(int a[],int len,int (*pf)(int,int))
{
	int i,j;
	int temp;
	
	for(i=0;i<len-1;++i)
		for(j=i+1;j<len;++j)
			if(pf(a[i],a[j])>0){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int increase(int v1,int v2)
{
	return v1-v2;
}

int decrease(int v1,int v2)
{
	return v2-v1;
}

int main(void)
{
	int a[] = {5,4,3,6,1,3,2,3};
	int len = sizeof(a)/sizeof(*a);
	int i;
	
	sort(a,len,&increase);
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
	
	sort(a,len,&decrease);
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}

