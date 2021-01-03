#include <stdio.h>

int mystrcspn(char* str, char* set)
{
	int i, j;
	
	for (i = 0; str[i] != '\0'; ++i)
		for (j = 0; set[j] != '\0'
				&& set[j] == str[i]; ++j);
	return i;
}

int main(void)
{
	char a[10] = "abcdefghi";
	int i;
	
	i = mystrcspn(a, "fd");
	printf("%d %c\n", i, a[i]);
	return 0;
}