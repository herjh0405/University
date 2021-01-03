//Listing 10.10 The sum_arr1.c Program
// sum_arr1.c -- �Լ��� �迭 ���� - call by pointer
// use %u or %lu if %zd doesn't work
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	int answer;
	answer = sum(marbles, SIZE);//�迭�� �����Ѵ�
	printf("marble�� ��ü ������ %d.\n", answer);
	printf("marble�� ũ��� %zd bytes.\n", sizeof marbles);
	system("pause");
	return 0;
}

int sum(int ar[], int n) // ar[]�� array ����̳� pointer�̴�
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i];
	printf("ar�� ũ��� %zd ����Ʈ.\n", sizeof ar);
	ar++; //ar�� pointer
	printf("ar[] = %d\n", *ar);
	return total;
}
