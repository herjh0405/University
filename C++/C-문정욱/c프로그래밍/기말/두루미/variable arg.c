#include <stdio.h>

void f(int first, ... )
{
	char* p;
	
	p=(char*)&first + sizeof(int);
	
	printf("%p: ", p);
	printf("%d\n", *(int*)(p) );
	
	p+=sizeof(int);
	
	printf("%p: ", p);
	printf("%d\n", *(int*)(p) );
	
	p+=sizeof(int);
	
	printf("%p: ", p);
	printf("%d\n", *(int*)(p) );
	
	p=NULL;
}

int main(void)
{
	f(99,1,2,3);
	return 0;
}
