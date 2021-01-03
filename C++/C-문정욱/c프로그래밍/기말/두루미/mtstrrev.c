#include <stdio.h>

char* mystrrev(char* str)
{
	int i,j;
	char temp;

	for (j = 0; str[j] != '\0'; ++j);
	for (i = 0; i < j-i-1 ;++i) {
		temp = str[i];
		str[i] = str[j-i-1];
		str[j-i-1] = temp;
	}
	return str;
}

int main(void)
{
	char a[5] = "abcd";
	
	printf("%s\n", mystrrev(a));

	return 0;
}