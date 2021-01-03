// Listing 6.19 The scores_in.c Program
// scores_in.c -- uses loops for array processing
// 등차수열을 배열에 저장후 출력하기
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]); // read in the ten scores
	printf("The scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]); // verify input
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index]; // add them up
	average = (float)sum / SIZE; // time-honored method
	printf("Sum of scores = %d, average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);
	system("pause");
	return 0;
}
