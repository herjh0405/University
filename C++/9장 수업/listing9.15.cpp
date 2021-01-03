// Listing 9.15 The swap3.c Program
/* swap3.c -- using pointers to make swapping work */
#include <stdio.h>
#include <stdlib.h>

void interchange(int* u, int* v);
int main(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y); // send addresses to function
	printf("Now x = %d and y = %d.\n", x, y);
	system("pause");
	return 0;
}
void interchange(int* u, int* v)
{
	int temp;
	temp = *u; // temp gets value that u points to
	*u = *v;
	*v = temp;
}
