#include <stdio.h>
#include <stdarg.h>
void f(int first, ... )
{
	va_list p;
	
	va_start(p,first);
	
	printf("%p: ", p);
	printf("%d\n", va_arg(p,int) );
	
	printf("%p: ", p);
	printf("%d\n", va_arg(p,int) );
	
	printf("%p: ", p);
	printf("%d\n", va_arg(p,int) );
	
	va_end(p);
}

int main(void)
{
	f(99,1,2,3);
	return 0;
}
