#include <stdio.h>

void f(int first, ... )
{
	char* p;
	
	p=(char*)&first + sizeof(int);
	
	printf("%p: ", p);
	printf("%d\n", *(int*)((p+=sizeof(int))-sizeof(int)) );

	
	printf("%p: ", p);
	p+=sizeof(int);
	printf("%d\n", *(int*)((p+=sizeof(int))-sizeof(int)) );

	printf("%p: ", p);
	p+=sizeof(int);
	printf("%d\n", *(int*)((p+=sizeof(int))-sizeof(int)) );
	
	p=NULL;
}

int main(void)
{
	f(99,1,2,3);
	return 0;
}
