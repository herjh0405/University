//Listing 10.8 The pnt_add.c Program
// pnt_add.c -- pointer addition
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];//short�� 2 by 2 �� �ּҰ��� 2�� ����
	short* pti;
	short index;
	double bills[SIZE];
	double* ptf;
	pti = dates; // assign address of array to pointer
	//dates++;//l-value�� �ʿ��մϴ�
	printf("Before pti++::pti = %p\n", pti);
	pti++;
	printf("After pti++::pti = %p\n", pti);
	printf("dates = %p, &dates[0] = %p\n", dates, &dates[0]);//dates�� �ּ�, &dates[0]�� �ּҸ� Ȯ��

	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
		printf("pointers + %d: %10p %10p\n",
			index, pti + index, ptf + index);//pti + 1, ptf + 1 => �� �����ϴ����� Ȯ�� �ʿ�
	system("pause");
	return 0;
}
//int *p�� p�� pointer�̰� ���� �޸��ּ�
//short�� 2�� double�� 8�� ������