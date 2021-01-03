//Listing 10.18 The Matrix Program
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 4
#define COLSD 5
#define COLSE 5

void transpose(const int a[][COLS], int rows, int b[][ROWS], int cols);
void product(const int a[][COLS], int rows, const int d[][COLSD], int rowsd, int e[][COLSE], int rowse);
void show(int* a, int rows, int cols);

int main(void)
{

	int a[ROWS][COLS] = { { 2, 4, 6, 8}, { 3, 5, 7, 9}, {12,10, 8, 6} };

	printf("Showing Matrix a:\n");
	show((int*)a, ROWS, COLS);
	int b[COLS][ROWS];


	int d[COLS][5] = { { 1,2,3,4,5 },{ 1,1,1,1,1 },{ 2,2,2,2,2 },{ 3,3,3,3,3 } };
	int e[ROWS][5];

	transpose(a, ROWS, b, COLS);
	printf("Transpose of a : ");
	show((int*)b, COLS, ROWS);

	printf("Matrix d : ");
	show((int*)d, COLS, COLSD);

	product(a, ROWS, d, COLS, e, ROWS);
	printf("Product of MATRIX a and MATRIX  d : ");
	show((int*)e, ROWS, COLSE);

	system("pause");
	return 0;
}
void transpose(const int a[][COLS], int rows, int b[][ROWS], int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			b[j][i] = a[i][j];
		}
	}
}
void product(const int a[][COLS], int rows, const int d[][COLSD], int rowsd, int e[][COLSE], int rowse)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < COLSD; j++)
		{
			for (int k = 0; k < rowsd; k++)
			{
				sum = sum + a[i][k] * d[k][j];
			}

			e[i][j] = sum;
			sum = 0;
		}
	}
}


void show(int* a, int m, int n)
{

	printf("\n{");
	int i, j;
	for (i = 0; i < m; i++)
	{
		printf("\n  {");
		for (j = 0; j < n; j++)
		{
			printf("%d ,", *((a + i * n) + j));
		}
		printf("} ,");
	}

	printf("\n}\n");
}

