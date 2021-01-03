#include <stdio.h>

char* my_strset(char* str,int ch)
{
	int i;

	for (i = 0; str[i]!='\0';++i)
		str[i] = ch;
	return str;
}

int main(void)
{
	char a[5] = "abcd";
	char b[] = "1234abcd";

	printf("%s\n", my_strset(a,'e'));
	printf("%s\n", my_strset(b,'1'));
	return 0;
}