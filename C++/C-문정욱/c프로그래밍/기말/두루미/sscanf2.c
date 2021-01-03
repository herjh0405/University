#include <stdio.h>

int main(void)
{
	char bf[] = "123 3.5 2.7  321";
	int a,d;
	double b, c;
	int v;
	int s=0;

	// sscanf(bf, "%d%lf", &a, &b);

	sscanf(&bf[0], "%d%n", &a, &v);
	s += v;
	sscanf(&bf[s], "%lf%n", &b, &v);
	s += v;
	sscanf(&bf[s], "%lf", &c, &v);
	s += v;
	sscanf(&bf[s], "%d", &d);

	printf("%d %f %f %d\n", a, b, c, d);
	return 0;
}