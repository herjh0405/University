//Listing 12.3
/* loc_stat.c -- using a local static variable
F11 사용하여 static 실행 여부를 확인
*/
#include <stdio.h>
void trystat(void);

int main(void)
{
	int count;

	for (count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}
	getchar();
	return 0;
}

void trystat(void)
{
	int fade = 1;
	static int stay = 1;//static 변수

	printf("fade = %d and stay = %d\n", fade++, stay++);
}
