#include <stdio.h>

int main(void)
{
	FILE* infp;
	FILE*  outfp;
	int a[10];
	
	infp=fopen("input.txt","rb");
	outfp=fopen("output.txt","wb");
	
	while( fread(&a,sizeof(a),10,infp)>0 ) {
		fwrite(&a,sizeof(a),10,outfp);
	}
	
	fclose(outfp);
	fclose(infp);
	return 0;
}
