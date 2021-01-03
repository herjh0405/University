/*
double data[15];를 화면에서 입력받는다. 배열을 function에 전달한다.
main()에서 처리하는 일: 1. 실수 값을 입력, 2. 입력된 값을 출력,  4. 정렬(sort하기)
  호출되는 함수는 getData(double[]), displayData(double[]), sortData(double[]);
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