#include <stdio.h>

int mystrcmp(char* str1, char* str2)
{
	int i;
	
	for (i = 0; (str1[i] != '\0' || str2[i] != '\0')
		&& !(str1[i] - str2[i] != 0); ++i);
	return str1[i] - str2[i];
}

int main(void)
{
	char a[10] = "abc";
	char b[10] = "abcd";
	char c[10] = "abcde";
	char d[10] = "aaaa";
	
	printf("%d\n", mystrcmp(a, b));
	printf("%d\n", mystrcmp(b, b));
	printf("%d\n", mystrcmp(b, c));
	printf("%d\n", mystrcmp(b, d));
	return 0;
}