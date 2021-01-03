#include <stdio.h>

char* my_strnset(char* str,int ch,int n)
{
	int i;

	for (i = 0; i<n && str[i]!='\0'; ++i)
		str[i] = ch;
	return str;
}

int main(void)
{
	char a[5] = "abcd";
	char b[] = "1234abcd";

	printf("%s\n", my_strnset(a,'e',2));
	printf("%s\n", my_strnset(b,'1',8));
	printf("%s\n", my_strnset(b, '2', 10));
	return 0;
}