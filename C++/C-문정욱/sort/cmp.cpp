#include <stdio.h>

void sort(int* a, int len, int (*pf)(int,int))
{
	int i,j;
	int temp;
	
	for(i=0;i<len-1;++i)
		for(j=i+1;j<len;++j)
			if(pf(a[i],a[j])){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int cmp(int v1,int v2)
{
	return v1-v2 < 0;
}

int main(void)
{
	int a[] = {1,2,3,4,2,3,6,2,3,1};
	int len = sizeof(a)/sizeof(a[0]);
	int i ;
	
	sort(a,len,&cmp);
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}

