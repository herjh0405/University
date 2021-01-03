/*
double data[15];�� ȭ�鿡�� �Է¹޴´�. �迭�� function�� �����Ѵ�.
main()���� ó���ϴ� ��: 1. �Ǽ� ���� �Է�, 2. �Էµ� ���� ���,  4. ����(sort�ϱ�)
  ȣ��Ǵ� �Լ��� getData(double[]), displayData(double[]), sortData(double[]);
*/
#include <stdio.h>
#include <stdlib.h>
void getData(double[], int);
void displayData(double[], int);
void sortData(double[], int);
void interchange(double*, double*);
bool compare(double, double);
int main(void)
{
	double data[5];
	const int count = 5;
	getData(data, count);
	displayData(data, count);
	sortData(data, count);
	displayData(data, count);

	system("pause");
	return 0;
}
void displayData(double data[], int n)
{
	int j;
	for (j = 0; j < n; j++) {
		printf("data[%d]=%lf\n", j, data[j]);
	}
}
void getData(double data[], const int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("data[%d]=", i);
		scanf_s("%lf", &data[i]);
	}
}
void sortData(double realdata[], int n)
{
	int j;
	int k;
	int least;
	for (j = 0; j < n-1; j++)
	{
		least = j;
		for (k = j+1; k < n; k++)
		{
			if (compare(realdata[k], realdata[least]))
				interchange(&realdata[k], &realdata[least]);
		}
	}
}
void interchange(double* u, double* v)
{
	int temp;
	temp = *u; // temp gets value that u points to
	*u = *v;
	*v = temp;
}
bool compare(double x, double y) /* recursive function */
{
	return(x > y ? false : true);
}