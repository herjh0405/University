#include <stdio.h>

int mystrcspn(char* str, char* set)
{
	int i, j;

	for (j = 0; set[j] != '\0' ; ++j)
		for (i = 0; str[i] != '\0' 
					&& set[j] != str[i]; ++i);
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