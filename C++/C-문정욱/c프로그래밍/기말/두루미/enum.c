#include <stdio.h>

int main(void)
{
	enum fruit { apple, strawberry, pear, banana };
	enum fruit f1,f2,f3,f4;
	
	f1=apple;
	f2=strawberry;
	f3=pear;
	f4=banana;
	
	printf("%d %d %d %d\n",f1,f2,f3,f4);
	return 0;
}

