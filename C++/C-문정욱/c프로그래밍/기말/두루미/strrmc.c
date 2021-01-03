#include <stdio.h>

char* strrmc(char* s, char ch)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
		while (s[i] == ch) {
			for (j = 0; (s[i+j] = s[i+j+1]) != '\0'; ++j);
		}
	return s;
}

int main(void)
{
	char a[] = "abXcXdeXfXXg";

	printf("%s\n", strrmc(a, 'X') );

	return 0;
}











