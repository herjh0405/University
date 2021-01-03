#include <stdio.h>

int main(void)
{
	FILE* infp;
	FILE* outfp;
	int a;
	
	infp=fopen("input.txt", "rb");
	outfp=fopen("output.txt","wb");
	
	while( fread(&a,4,1,infp)>0 ) {
		fwrite(&a,4,1,outfp);
	}

	fclose(outfp);
	fclose(infp);
	return 0;
}
