//Listing 10.5 The designate.c Program
// designate.c -- use designated initializers
// Designated Initializers (C99) – Visual Studio 2019는 c99를 지원하지 않음
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,[4] = 31,30,31,[1] = 29 };
	//Designated Initializers(C99)
	int i;
	for (i = 0; i < MONTHS; i++)
		printf("%2d %d\n", i + 1, days[i]);
	system("pause");
	return 0;
}
//국제표준에 [4]가 4개가 30이라는건데 여기선 지원해주지 않음