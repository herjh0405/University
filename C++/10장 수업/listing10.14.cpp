//Listing 10.14 The arf.c Program
/* arf.c -- array functions */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
	printf("The original dip array:\n");
	show_array(dip, SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);
	system("pause");
	return 0;
}
/* displays array contents */
void show_array(const double ar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
//		printf("%8.3f ", ar[i]);
		printf("%8.3f ", *(ar+i));//pointer로 사용한다
	putchar('\n');
}
/* multiplies each array member by the same multiplier */
void mult_array(double ar[], int n, double mult)//논리적 오류
{
	int i;
	for (i = 0; i < n; i++)
		*(ar+i) *= mult;
}
