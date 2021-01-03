#include <stdio.h>

int main(void)
{
	FILE* infp;
	FILE* outfp;
	int ch;
	
	infp=fopen("input.txt", "rt");
	outfp=fopen("output.txt", "wt");
	
	while((ch=fgetc(infp))!=EOF) {
		fputc(ch,outfp);
	}
	
	fclose(outfp);
	fclose(infp);
	return 0;
}
