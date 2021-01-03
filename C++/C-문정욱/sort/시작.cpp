#include <stdio.h>

void sort(int a[],int len, int(*pf)(int,int))
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

int cmp(int v1,int v2)
{
	return v2 - v1;
}


int main(void)
{
	int a[]= {5,1,2,4,1,3,4,2,1};
	int len = sizeof(a)/sizeof(a[0]);
	//int len = sizeof(a)/sizeof(*a);
	int i;
	
	sort(a,len,&cmp);
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}

