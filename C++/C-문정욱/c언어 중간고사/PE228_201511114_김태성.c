#include <stdio.h>

int input_dir(int a[],int max_len)
{
	int len,i;
	
	scanf("%d",&len);
	if(len >= max_len) len=max_len;
	for(i=0;i<len&&
		!(scanf("%d",&a[i])!=1);++i)
		;
	return i;
}

void print(int a[],int len)
{
	int i;
	
	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
}

int main(void)
{
	int a[1024];
	int len,max_len = 1024;
	int i;
	
	len = input_dir(a,max_len);
	print(a,len);
	return 0;
}

