#include <stdio.h>

void f(int first, ... )
{
	char* p;
	
	p=(char*)&first;
	
	printf("%p: ", p);
	p+=sizeof(int);
	printf("%d\n", *(int*)p );

	
	printf("%p: ", p);
	p+=sizeof(int);
	printf("%d\n", *(int*)(p-sizeof(int)) );

	printf("%p: ", p);
	p+=sizeof(int);
	printf("%d\n", *(int*)(p-sizeof(int)) );
	
	p=NULL;
}

int main(void)
{
	f(99,2,3,4);
	return 0;
}
