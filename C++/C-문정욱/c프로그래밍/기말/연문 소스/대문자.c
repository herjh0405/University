#include <stdio.h>
#include <ctype.h>
#include <string.h>

void to_upper_string(char* s)
{
	int i;
	
	for(i=0; s[i]!='\0'; ++i)
		s[i] = toupper(s[i]);
}

int main(void)
{
	char str[512];
	int i, n;
	
	scanf("%d", &n);
	for(i=0;i<n;++i) {
		scanf("%s", str);
		if( strcmp(str, "star")==0 )
			to_upper_string(str);
		printf("%s ", str);
	}
	printf("\n");
	return 0;
}
