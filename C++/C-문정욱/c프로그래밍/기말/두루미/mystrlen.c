#include <stdio.h>

int my_toupper(int ch)
{
	return ch-0x20;
}

int main(void)
{
	int ch;
	
	for(ch=0x61;ch<=0x7A++ch)
		pritnf("%2x:%c -> %2x:%c\t",ch,ch,
			my_toupper(ch),my_toupper(ch));
	printf("\n");
	return 0;
}

