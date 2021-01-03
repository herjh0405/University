//Listing 11.6
/*  getsputs.c  -- using gets() and puts() */
#include <stdio.h>
#define STLEN 81
int main(void)
{
	char words[STLEN];

	puts("Enter a string, please.");
	//gets(words);  // read an entire line of input instead of a single word until newline
	//gets() not check if the input line fits into the array
	gets_s(words);
	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done.");
	getchar();
	return 0;
}
