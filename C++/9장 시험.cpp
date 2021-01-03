/* 9�� �ڵ����� 1��: 50��
�й�: 201511152
�̸�: ������
github id: herjh0405@naver.com
*/
/*
float data[15];�� ȭ�鿡�� �Է¹޴´�. �迭�� function�� �����Ѵ�.
main()���� ȣ���ϴ� �Լ� ����: 1. �Ǽ� ���� �Է�, 2. �Էµ� ���� ���,  4. ����(sort�ϱ�), 5. �ּҰ�, 6.�ִ밪, 7. ��հ�

*/
#include <stdio.h>
#include <stdlib.h>
void getData(float[], int);
void displayData(float[], int);
float findMin(float[], int);
float findMax(float[],int);
float findAverage(float[],int);
void sortData(float[], int);
void interchange(float*, float*);
bool compare(float, float);
float minimum;
float maximum;
float average;
int main(void)
{
	char select;
	float data[50];
	const int count = 50;
	printf("\nSelect command: e: Enter Data, d: Display Data,  s: sort Data, m: Find Min, x: Find Max, a: Find Average, q: Quit: ");
	scanf("%f",&select);
	while (select != 'q')
	{
		switch (select)
		{
		case 'e':
		case 'E':
			printf("\nEnter Data: ");
			getData(data,count);
			break;
		case 'd':
		case 'D':
			printf("\nDisplay Data: ");
			displayData(data,count);
			break;
		case 's':
		case 'S':
			printf("\nSort Data: ");
			sortData(data,count);
			break;
		case 'm':
		case 'M':
			printf("\nFind Min: ");
			minimum = findMin(data,count);
			printf("\nMinimum = %f\n", minimum);
			break;
		case 'x':
		case 'X':
			printf("\nFind Max: ");
			maximum = findMax(data,count);
			printf("\nMaximum = %f\n", maximum);
			break;
		case 'a':
		case 'A':
			printf("\nFind Average: ");
			average = findAverage(data,count);
			printf("\nAverage = %f\n", average);
			break;
		default:
			printf("\nEnter Data: ");
			printf("WRONG INPUT  \n");
			printf("Re-Enter\n");
			//cout << "WRONG INPUT  " << endl;
			//cout << "Re-Enter" << endl;
		}
		scanf("%c", &select);
		//cin >> select;
	}
	system("pause");
	return 0;
}
void getData(float data[], const int count)
{
	//ȭ�鿡�� 10���� �Է¹޴´�, 
	//11 ~ 20: data[i] * 0.1, 21 ~ 30: data[i] * 3.14,  31 ~ 40: data[i] /3, 41 ~ 50: data[i] * 0.314
	int i;
	for (i = 0; i < count; i++)
	{
		if (i < 10) {
			scanf("%f", &data[i]);
		}
		else if (i < 20) {
			data[i]=data[i-10] * 0.1;
		}
		else if (i < 30) {
			data[i] =data[i-20]* 3.14;
		}
		else if (i < 40) {
			data[i]=data[i-30] / 3;
		}
		else if (i < 50) {
			data[i] = data[i - 40] * 0.314;
		}
		printf("data[%d]=%f", i, data[i]);
	}
}
void displayData(float data[], const int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		if (i == 9)
			printf("\n");
		else if (i == 19)
			printf("\n");
		else if (i == 29)
			printf("\n");
		else if (i == 39)
			printf("\n");
	}
	printf("%f", data[i]);
	//1�ٿ� 10���� ����Ѵ�
	//�� 5�ٷ� ����Ѵ�
}
void sortData(float realdata[], int n)
{
	int i, j;

	for (i = 0; i < 50; i++)
	{
		for (j = 0; j = 50 - i; j++) {
			if (compare(realdata[i],realdata[i+j]))
				interchange(&realdata[i],&realdata[j]);;
		}
	}
}
void interchange(float* u, float* v)
{
	int temp;
	temp = *u; // temp gets value that u points to
	*u = *v;
	*v = temp;
}
bool compare(float x, float y) /* recursive function */
{
	return(x < y ? false : true);
}
float findMin(float data[],int count)
{
	int i;
	float Min;
	for (i = 0; i < count; i++) {
		if (data[i] < data[i + 1])
			Min = data[i];
	}
	return Min;
}
float findMax(float data[],int count)
{
	int i;
	float Max;
	for (i = 0; i < count - 1; i++) {
		if (data[i] < data[i + 1])
			Max = data[i + 1];
	}
	return Max;
}
float findAverage(float data[],int count)
{
	int i;
	float sum=0;
	for (i = 0; i < count; i++)
	{
		sum = sum + data[i];
	}
	return sum / average;
}