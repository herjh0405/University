#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[512], p[521]="";
	int i, n;
	
	scanf("%d", &n);
	for(i=0;i<n;++i) {
		scanf("%s", c);
		if( strcmp(c,p)!=0 )
			printf("%s ", c);
		strcpy(p,c);
	}
	printf("\n");
	return 0;
}
