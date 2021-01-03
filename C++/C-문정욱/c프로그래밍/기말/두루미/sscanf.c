#include <stdio.h>

int main(void)
{
	char bf[] = "123 3.5";
	int a;
	double b;

	// sscanf(bf, "%d%lf", &a, &b);
	
	sscanf(&bf[0], "%d", &a);	
	sscanf(&bf[3], "%lf", &b);

	printf("a==%d, b==%f\n", a, b);
	return 0;
}