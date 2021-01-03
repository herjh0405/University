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
	//pd = p1; // int * 형식의 값을 double * 형식의 값으로 치환할 수 없다

	//part2
	int * pt;
	int(*pa)[3];
	int ar1[2][3];
	int ar2[3][2]= { {1,2},{3,4},{5,6} };
	int **p2;  // a pointer to a pointer
	// pointer compatibility ?
	pt = &ar1[0][0];  // both pointer-to-int
	pt = ar1[0]; // both pointer-to-int
	//pt = ar1; // int (*)[3] 형식의 값을 int * 형식의 값으로 치환할 수 없다
	pa = ar1;         // both pointer-to-int[3]
	//pa = ar2; // int (*)[2] 형식의 값을 int (*)[3] 형식의 값으로 치환할 수 없다
	p2 = &pt;         // both pointer-to-int *
	*p2 = ar2[0];     // both pointer-to-int *
	(*p2)++;
	printf("**p2 = %d\n", **p2);
	//p2 = ar2; // int (*)[2] 형식의 값을 int ** 형식의 값으로 치환할 수 없다
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
	pp2 = &p1; // 허용되나 const qualifier가 무시됨?
	*pp2 = &n; // valid, both const, 그러나 p1이 n을 point 하게 됨
	*p1 = 10;  // valid, 그러나 const n을 변경하는 효과가 발생하는 문제가 있음

	getchar();
	return 0;
}
