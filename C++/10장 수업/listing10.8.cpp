//Listing 10.8 The pnt_add.c Program
// pnt_add.c -- pointer addition
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];//short가 2 by 2 라서 주소값이 2만 변함
	short* pti;
	short index;
	double bills[SIZE];
	double* ptf;
	pti = dates; // assign address of array to pointer
	//dates++;//l-value가 필요합니다
	printf("Before pti++::pti = %p\n", pti);
	pti++;
	printf("After pti++::pti = %p\n", pti);
	printf("dates = %p, &dates[0] = %p\n", dates, &dates[0]);//dates의 주소, &dates[0]의 주소를 확인

	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
		printf("pointers + %d: %10p %10p\n",
			index, pti + index, ptf + index);//pti + 1, ptf + 1 => 얼마 증가하는지를 확인 필요
	system("pause");
	return 0;
}
//int *p는 p가 pointer이고 값은 메모리주소
//short는 2씩 double은 8씩 증가함