// Listing 9.5 The proto.c Program
/* proto.c -- uses a function prototype */
#include <stdio.h>
#include <stdlib.h>
int imax(int, int); /* prototype */
void print_name();
int main(void)
{
	printf("The maximum of %d and %d is %d.\n",
		3, 5, imax(3, 5));
	printf("The maximum of %d and %d is %d.\n",
		3, 5, imax(3.0, 5.0));
	print_name();
	system("pause");
	return 0;
}
int imax(int n, int m)
{
	float f = 3.14;
	return (n > m ? n : m);//if�� �����Ͽ� �ǽ�,  type casting �߻�
	//return(if (n > m)n; else f;);
}
void print_name()
{
	printf("\n argument�� check���� �ʴ´�\n");
}