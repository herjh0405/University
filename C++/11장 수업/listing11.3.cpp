//Listing 11.3
//  addresses.c  -- addresses of strings
//string을 가리키는 array, pointer, string 자체의 주소를 확인
#define MSG "I'm special." 

#include <stdio.h>
int main()
{
	char ar[] = MSG;
	const char* pt = MSG;
	printf("address of \"I'm special\": %p \n", "I'm special");//MSG와는 .이 없는 차이
	printf("              address ar: %p\n", ar);
	printf("              address pt: %p\n", pt);
	printf("          address of MSG: %p\n", MSG);
	printf("address of \"I'm special\": %p \n", "I'm special");
	getchar();
	return 0;
}
