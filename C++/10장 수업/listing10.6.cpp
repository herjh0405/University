//Listing 10.6 The bounds.c Program
// bounds.c -- exceed the bounds of an array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main(void)
{
	int value1 = 44;
	int arr[SIZE];
	int brr[SIZE];
	/* Visual Studio2019 �������� ����*/
	//brr = arr;
	//brr[SIZE] = { 5,3,2,8 };
	//arr[-1] = 1;������ ������ 4���� ����ߴµ� �̻��ѵ��� �����ϴϱ� waring error(corrupt)
	//int brr(�迭�̸�->�޸� �ּҸ� ����Ű�� rvalue)[];
	//brr[0]-�갡 lvalue
	int value2 = 88;
	int i;
	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1; 
	for (i = -1; i < 7; i++)
		printf("%2d %d\n", i, arr[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("address of arr[-1]: %p\n", &arr[-1]);//warning �߻�-corrupted
	printf("address of arr[4]: %p\n", &arr[4]);//&�� �ּҸ� �ǹ�
	printf("address of value1: %p\n", &value1);
	printf("address of value2: %p\n", &value2);
	system("pause");
	return 0;
}
//printf�� parameter�� stack�� �ְ� �ű⼭ �ٽ� ��
//�׷��� -1�� �츮�� ������ �ƴϱ� ������ corrupt-25�� �߰�����