//Listing 11.2
/* strptr.c -- strings as pointers
string�� �ּ�, * ������ ����
*/

#include <stdio.h>
int main(void)
{
	printf("%s, %p, %c\n", "We", "are", *"space farers");
	getchar();
	return 0;
}
