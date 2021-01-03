#include <stdio.h>

int my_strlen(char* str)
{
	int i;

	for (i = 0; str[i] != '\0', ++i)
		;
	return i;
}

int main(void)
{
	char a[5] = "abcd";
	char b[] = "1234abcd";

	printf("%d\n", mystrlen(a));
	printf("%d\n", mystrlen(b));
	return 0;
}