#include <stdio.h>

int main(void)
{
	int stud, apple;
	int remain;
	
	scanf("%d%d",&apple,&stud);
	remain = apple % stud ;
	printf("remain ==%d\n",remain);
	return 0;
}

