//Listing 10.10 The sum_arr1.c Program
// sum_arr1.c -- 함수에 배열 전달 - call by pointer
// use %u or %lu if %zd doesn't work
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	int answer;
	answer = sum(marbles, SIZE);//배열을 전달한다
	printf("marble의 전체 갯수는 %d.\n", answer);
	printf("marble의 크기는 %zd bytes.\n", sizeof marbles);
	system("pause");
	return 0;
}

int sum(int ar[], int n) // ar[]이 array 모양이나 pointer이다
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i];
	printf("ar의 크기는 %zd 바이트.\n", sizeof ar);
	ar++; //ar은 pointer
	printf("ar[] = %d\n", *ar);
	return total;
}
