#include <stdio.h>

char* my_strcpy(char* dst, char* str)
{
	int i;

	for(i=0; (dst[i]=str[i])!='\0'; ++i)
		;
	return dst;	
}

int main(void)
{
	char a[5] = "abcd";
	char b[] = "1234abcd";

	printf("%s\n", my_strcpy(b, a));

	return 0;
}
