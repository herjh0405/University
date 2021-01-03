//Listing 10.12 The order.c Program
/* order.c -- precedence in pointer operations */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int data[2] = { 100, 200 };
	int moredata[2] = { 300, 400 };
	int* p1, * p2, * p3;
	p1 = p2 = data;
	p3 = moredata;
	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
	/*
	printf("data: %d - %d", *data, *(data + 1), *(data++));//식이 수정할 수 있는 l-value가 아니다
	printf("data: %d - %d", *data, *(data + 1), *data++);
	*/
	system("pause");
	return 0;

}
