//Listing 10.21 : pointer compatibility
#include <stdio.h>
int main(void)
{
	/*
	//part1
	int n = 5;
	double x;
	int * p1 = &n;
	double * pd = &x;
	x = n; // implicit type conversion
	//pd = p1; // int * ������ ���� double * ������ ������ ġȯ�� �� ����

	//part2
	int * pt;
	int(*pa)[3];
	int ar1[2][3];
	int ar2[3][2]= { {1,2},{3,4},{5,6} };
	int **p2;  // a pointer to a pointer
	// pointer compatibility ?
	pt = &ar1[0][0];  // both pointer-to-int
	pt = ar1[0]; // both pointer-to-int
	//pt = ar1; // int (*)[3] ������ ���� int * ������ ������ ġȯ�� �� ����
	pa = ar1;         // both pointer-to-int[3]
	//pa = ar2; // int (*)[2] ������ ���� int (*)[3] ������ ������ ġȯ�� �� ����
	p2 = &pt;         // both pointer-to-int *
	*p2 = ar2[0];     // both pointer-to-int *
	(*p2)++;
	printf("**p2 = %d\n", **p2);
	//p2 = ar2; // int (*)[2] ������ ���� int ** ������ ������ ġȯ�� �� ����
	*/

	//part3
	int num = 20;
	const int y = 23;
	int* p1 = &num;
	const int* p2 = &y;
	const int** pp2;
	//p1 = p2;   // not safe -- assigning const to non-const
	p2 = p1;   // valid    -- assigning non-const to const
	pp2 = &p1; // not safe -- assigning nested pointer types

	int* p1;
	const int n = 13;
	pp2 = &p1; // ���ǳ� const qualifier�� ���õ�?
	*pp2 = &n; // valid, both const, �׷��� p1�� n�� point �ϰ� ��
	*p1 = 10;  // valid, �׷��� const n�� �����ϴ� ȿ���� �߻��ϴ� ������ ����

	getchar();
	return 0;
}
