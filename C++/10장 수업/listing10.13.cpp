//Listing 10.13 The ptr_ops.c Program
// ptr_ops.c -- pointer operations
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int urn[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;
	ptr1 = urn; // assign an address to a pointer
	ptr2 = &urn[2]; // dereference a pointer and take
					// the address of a pointer
	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//ptr1, &ptr1�� �ּ� ���� �ٸ���
	// pointer addition
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr4 + 3) = %d\n",	ptr1 + 4, *(ptr1 + 3));//ptr1 + 4�� ����Ű�� �ּҸ� Ȯ��
	ptr1++; // increment a pointer
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//ptr1, &ptr1�� �ּ� ���� ��ȭ�� Ȯ��
	ptr2--; // decrement a pointer
	printf("\nvalues after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);//ptr2, &ptr2�� �ּ� ���� ��ȭ�� Ȯ��
	--ptr1; // restore to original value
	++ptr2; // restore to original value
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
	// subtract one pointer from another
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",	ptr2, ptr1, ptr2 - ptr1);
	// subtract an integer from a pointer
	printf("\nsubtracting an int from a pointer:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
	system("pause");
	return 0;
}
