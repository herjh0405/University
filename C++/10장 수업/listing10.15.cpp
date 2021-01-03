//Listing 10.15 The zippo1.c Program
/* zippo1.c -- zippo info */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const int n = 10;
	//n++;
	int a[6] = { 1,2,3,4,5,6 };
	const int* b = a; //pointers to constants
	int* p;
	//b[1] = 4;
//*b = 3;
	*a = 3;
	a[1] = 2;
	printf("*b = %d\n", *b);
	b++;
	printf("*b = %d\n", *b);
	//p = b;//const int * 의 값을 int *에 assign할 수 없다

	int c[4] = { 5,6,7,8 };
	b = c;

	double d[3] = { 1.1, 2.2, 3.3 };
	double* const e = d; //constant pointers
	double* ptr;
	//e = &d[2];
	*e = 4.4;
	printf("*e = %f\n", *e);
	const double* const f = d; //constant pointers to constants
	//f = &d[1];//식이 수정할 수 있는 l-value가 아니다
	//*f = 5.5; //식이 수정할 수 있는 l-value가 아니다
	ptr = d;
	ptr = e;

	int zippo[4][2] = { { 2,4 },{ 6,8 },{ 1,3 },{ 5, 7 } };
	printf(" zippo = %p, zippo + 1 = %p\n",
		zippo, zippo + 1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n",
		zippo[0], zippo[0] + 1);
	printf(" *zippo = %p, *zippo + 1 = %p\n",
		*zippo, *zippo + 1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf(" *zippo[0] = %d\n", *zippo[2]);
	printf(" **zippo = %d\n", *(zippo[1] + 1));
	printf(" zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 1) + 1));
	system("pause");
	return 0;
}
