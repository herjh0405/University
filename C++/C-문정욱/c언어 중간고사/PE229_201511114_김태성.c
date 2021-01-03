#include <stdio.h>

int input_dir(int a[],int max_len)
{
	int len,i;
	
	scanf("%d",&len);
	if(len>=max_len) len = max_len;
	for(i=0;i<len&&
		!(scanf("%d",&a[i])!=1);++i)
		;
	return i;
}



int main(void)
{
	int a[1024];
	int len,max_len=1024;
	int val;
	int i;
	
	len = input_dir(a,max_len);
	scanf("%d",&val);
	
	for(i=0;i<len&&!(a[i] == val);++i)
		;
	if(i<len)
		printf("found: %d\n",i);
	else
		printf("not found.\n");
	return 0;
}

