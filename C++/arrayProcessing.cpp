/*
1. 10장 코딩시험 연습 문제
2. 2차원 배열에 대하여
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 3//30
#define COLS 3//40
void interchange(int*, int*);
bool compare(int, int);
float maximum(int ar[][COLS], int rows);
void initialize(int ar[][COLS], int rows);
void copy(int[][COLS], int, int(*ar)[COLS], int rows);
float minimum(int(*ar)[COLS], int rows);
//float sort(int(*ar)[COLS], int rows);
void sort(int(*ar)[COLS], int rows);
void print(int ar[][COLS], int rows);
int main(void)
{
	int score[ROWS][COLS], secondscore[ROWS][COLS];
	initialize(score, ROWS);
	print(score, ROWS);
	maximum(score, ROWS);
	printf("%f\n", maximum(score, ROWS));
	copy(score, ROWS, secondscore, ROWS);
	print(score, ROWS);
	minimum(score, ROWS);
	printf("%f\n", minimum(score, ROWS));
	sort(score, ROWS);
	print(score, ROWS);


	system("pause");
	return 0;
}
void sum_rows(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;
	ar++;//rows의 증가, ar은 pointer로서 첫번째 index로 사용
	for (r = 0; r < rows; r++)
	{
		tot = 0;

		for (c = 0; c < COLS; c++)
		{
			//tot += (ar)[r][c]; printf("ar = %d\n", (ar)[r][c]);
			tot += *(*(ar + r) + c);
			printf("ar = %d\n", *(*(ar + r) + c));
		}
		printf("row %d: sum = %d\n", r, tot);
	}
}
void sum_cols(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;
	for (c = 0; c < COLS; c++)
	{
		tot = 0;
		for (r = 0; r < rows; r++)
			tot += ar[r][c];
		printf("col %d: sum = %d\n", c, tot);
	}
}
int sum2d(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot = 0;
	//ar++;
	for (r = 0; r < rows; r++)		/// loop through rows
	{
		for (c = 0; c < COLS; c++) //// loop through columns
			tot += ar[r][c];
	}
	return tot;
}
float maximum(int ar[][COLS], int rows)
{
	int i;
	int j;
	int max = ar[0][0];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			if (max < ar[i][j])
				max = ar[i][j];
			else
			{
				max = max;
			}
		}
	}
	return max;
}
void initialize(int ar[][COLS], int rows)
{
	int i;
	int j;
	for (i = 0; i < rows; i++)
	{
		printf("공백으로 구분된 %d개의 정수를 입력하세요:", rows);
		for (j = 0; j < COLS; j++)
		{
			scanf_s("%d", &ar[i][j]);
		}
	}
}
void copy(int ar[][COLS], int n, int(*ar1)[COLS], int rows)
{
	initialize(ar1, rows);
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			ar[i][j] = ar1[i][j];
		}
	}
}
float minimum(int(*ar)[COLS], int rows)
{
	int i;
	int j;
	int min = ar[0][0];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			if (min > ar[i][j])
				min = ar[i][j];
			else
			{
				min = min;
			}
		}
	}
	return min;
}
void sort(int(*ar)[COLS], int rows)
{
	int i;
	int j;
	int c;
	int k;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			for (c = 0; c < rows; c++)
			{
				for (k = 0; k < COLS; k++)
				{
					if (compare(ar[i][j], ar[c][k]))
						interchange(&ar[i][j], &ar[c][k]);
				}

			}

		}
	}
}
bool compare(int x, int y)
{
	return(x > y ? false : true);
}
void interchange(int* u, int* v) {
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;

}
void print(int ar[][COLS], int rows)
{
	int i;
	int j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%5d", ar[i][j]);
		}
		printf("\n");
	}
}

