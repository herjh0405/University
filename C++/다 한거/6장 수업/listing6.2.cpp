// Listing 6.2 The when.c Program
// when.c -- when a loop quits
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n = 1;
	while (n < 7) // quit when n = 7
	{
		printf("n++ = %d, n = %d\n", n++, n);
		printf("++n = %d, n = %d\n", ++n, n);
		printf("n = %d, ++n = %d\n", n, ++n);//출력 순서는 반대-stack이기 때문
		printf("n = %d, n++ = %d\n\n", n, n++);

		//n++; // old source
		//printf("Now n = %d\n", n); // old source
	}
	printf("The loop has finished.\n");
	system("pause");
	return 0;
}
