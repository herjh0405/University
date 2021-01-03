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
	/* Visual Studio2019 지원하지 않음*/
	//brr = arr;
	//brr[SIZE] = { 5,3,2,8 };
	//arr[-1] = 1;문제는 없으나 4개를 얘기했는데 이상한데서 접근하니까 waring error(corrupt)
	//int brr(배열이름->메모리 주소를 가리키는 rvalue)[];
	//brr[0]-얘가 lvalue
	int value2 = 88;
	int i;
	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1; 
	for (i = -1; i < 7; i++)
		printf("%2d %d\n", i, arr[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("address of arr[-1]: %p\n", &arr[-1]);//warning 발생-corrupted
	printf("address of arr[4]: %p\n", &arr[4]);//&는 주소를 의미
	printf("address of value1: %p\n", &value1);
	printf("address of value2: %p\n", &value2);
	system("pause");
	return 0;
}
//printf는 parameter를 stack에 넣고 거기서 다시 뺌
//그래서 -1이 우리의 영역이 아니기 때문에 corrupt-25줄 추가설명