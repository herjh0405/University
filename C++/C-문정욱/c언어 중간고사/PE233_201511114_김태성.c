#include <stdio.h>

int max_value(int a[])
{
	int max_v,i;
	
	max_v = a[0];
	for(i=1;i<5;++i)
		if(a[i] > max_v)
			max_v = a[i];
	return max_v;
}

int main(void)
{
	int a[5];
	int i;
	
	for(i=0;i<5;++i)
		scanf("%d", &a[i]);
	printf("max == %d\n",max_value(a));
	return 0;
}

