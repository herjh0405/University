#include <stdio.h>

int main(void)
{
	int a;
	char ch;
	int b;

	scanf("%d", &a);
	scanf(" %c", &ch);
	scanf("%d", &b);
	
	if (ch == '+')
		printf("a+b==%d\n", a + b);
	else if (ch == '-')
		printf("a-b--%d\n", a - b);
	return 0;
}