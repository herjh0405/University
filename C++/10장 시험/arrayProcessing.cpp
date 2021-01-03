/*
1. 10장 코딩시험 연습 문제
2. 2차원 배열에 대하여 
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 30
#define COLS 40
float maximum(int ar[][COLS], int rows);
void initialize((int ar[][COLS], int rows);)
void copy(int[][COLS], int, int(*ar)[COLS], int rows);
float minimum(int(*ar)[COLS], int rows); 
float sort(int(*ar)[COLS], int rows);
int main(void)
{
	int score[ROWS][COLS], secondscore[ROWS][COLS];
	initialize(score, ROWS);
	maximum(score, ROWS);
	copy(score, ROWS, secondscore, ROWS);
	minimum(score, ROWS);
	sort(score, ROWS);


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

