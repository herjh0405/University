#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MR 3
#define MC 3

typedef double M[MR][MC];

void print(M m);
void set_n(M m,int n);

void shuffle(M m)
{
	int r, c, randr, randc;
	double t;
	
	randr=rand()%MR;
	randc=rand()%MC;
	
	for(r=0;r<MR;++r) 
		for(c=0;c<MC;++c) {
			t=m[r][c];
			m[r][c]=m[randr][randc];
			m[randr][randc]=t;
		}
}
 
int main(void)
{
	M m;
	
	srand((unsigned)time(NULL));
	
	set_n(m,4);
	shuffle(m);
	print(m);
	return 0;
}	
