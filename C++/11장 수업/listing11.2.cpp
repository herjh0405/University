//Listing 11.2
/* strptr.c -- strings as pointers
string의 주소, * 연산자 적용
*/

#include <stdio.h>
int main(void)
{
	printf("%s, %p, %c\n", "We", "are", *"space farers");
	getchar();
	return 0;
}
