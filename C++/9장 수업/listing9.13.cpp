// Listing 9.13 The swap1.c Program
/* swap1.c -- first attempt at a swapping function
�ڵ� ���迡 ��� ����
*/
#include <stdio.h>
#include <stdlib.h>

void interchange(int u, int v); /* declare function */
int main(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(x, y);// �Լ� ȣ�� ���Ŀ� ���� ������ ������ Ȯ��
	printf("Now x = %d and y = %d.\n", x, y);
	system("pause");
	return 0;
}
void interchange(int u, int v) /* define function */
{
	int temp;
	temp = u;
	u = v;
	v = temp;
}
