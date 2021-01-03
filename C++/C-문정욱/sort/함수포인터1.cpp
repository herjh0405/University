#include <stdio.h>

int add(int v1,int v2)
{
	return v1+v2;
}

int sub(int v1,int v2)
{
	return v1-v2;
}

void print_result(int v1,int v2,int(** fl)(int,int))
{
	int i;
	
	for(i=0;i<2;++i)
		printf("result = %d\n",fl[i](v1,v2));
}

int main(void)
{
	int(*functlist[2])(int,int) = {&add,&sub};
	int a,b;
	
	scanf("%d%d",&a,&b);
	print_result(a,b,funclist);
	return 0;
}

