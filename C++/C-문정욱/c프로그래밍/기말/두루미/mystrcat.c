#include <stdio.h>

char* mystrcat(char* dst, char* src)
{
	int i, j;

	for (i = 0; dst[i] != '\0'; ++i);
	for (j = i; src[j] != '\0'; ++j)
		dst[j] = src[j-i];
	return dst;
}

int main(void)
{
	char a[5] = "abcd";
	char b[13] = "1234abcd";

	printf("%s\n", mystrcat(b, a));

	return 0;
}