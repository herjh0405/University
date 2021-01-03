#include <stdio.h>

char* mystrstr(char* str, char* sub)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i) {
		for (j = 0; str[i + j] == sub[j]
			&& sub[j] != '\0'; ++j);
			if (sub[j] == '\0') return &str[i];
	}
	return sub[0] ? NULL : &str[i];
}

int main(void)
{
	char a[20] = "abc12defg";

	printf("%s\n", mystrstr(a, "12") );
	printf("%s\n", mystrstr(a, "XY") );
	printf("%s\n", mystrstr(a, "") );
	printf("%s\n", mystrstr("","") );
	return 0;
}