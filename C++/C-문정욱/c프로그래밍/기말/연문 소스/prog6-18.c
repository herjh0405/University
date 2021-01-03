#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[512];
	int i, n;
	int ch='t';
	
	scanf("%d", &n);
	
	for(i=0;i<n;++i) {
		scanf("%s", str);
		if(strchr(str,ch)!=NULL)
			printf("%s ", str);
	}
	printf("\n");
	return 0;
}
