// Listing 9.4 The misuse.c Program
/* misuse.c -- uses a function incorrectly */
#include <stdio.h>
#include <stdlib.h>
int imax(int, int);//function ���� - formal parameter�� type�� ���
//int imax();//���� ��� - ������ ����
int main(void)
{
	printf("The maximum of %d and %d is %d.\n",
		3, 5, imax(3, 5));//actual argument�� �Ѵ�.
	system("pause");
	return 0;
}
int imax(int n, int m) //formal arguments�� �Ѵ�
//int imax(n, m)
{
	return (n > m ? n : m);//return ���� expression
}
