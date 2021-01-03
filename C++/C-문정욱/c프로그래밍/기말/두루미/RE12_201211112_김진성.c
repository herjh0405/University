#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HUMAN 0
#define COMPUTER 1
#define GIVEUP -1

int x(int n, int p)
{
	return p!=0 ? (n+p)%3+1 : 0;
}

int win(int n, int p)
{
	int xv, cho;
	
	xv = x(n,p);
	for(cho=1;cho<=3;++cho)
		if(n>=cho&&xv!=cho&&!win(n-cho,cho))
			return 1;
	return 0;
}

int best_choice(int n, int p)
{
	int xv, cho;
	
	xv = x(n,p);
	for(cho=1;cho<=3;++cho)
		if(n>=cho&&xv!=cho&&!win(n-cho,cho))
			return cho;
	return 0;
}

int random_choice(int n, int x)
{
	int cho;
	
	do {
		cho=rand()%3+1;
	} while( !(cho!=x && n>=cho) );
	return cho;
}

int computer_choice(int n, int p)
{
	int xv, cho;
	
	xv = x(n,p);
	cho = best_choice(n,p);
	if(!(cho>=1 && cho<=3))
		return random_choice(n,xv);
	return cho;
}

int human_choice(int n, int p)
{
	int xv, cho;
	
	xv = x(n,p);
	cho = 0;
	while( !(cho==-1 || cho>=1 && cho<=3 && cho<=n && cho!= xv) ) {
		printf("The number to remove");
		printf("(1 ~ 3 or -1: giving up) >> ");
		scanf("%d", &cho);
	}
	return cho;
}

int get_num(void)
{
	int n=0;
	
	while( !(n>=10&&n<=50) ) {
		printf("The number of apples");
		printf("(10 ~ 50) >> ");
		scanf("%d", &n);
	}
	return n;
}

int get_turn(void)
{
	int turn=-1;
	
	while( !(turn==HUMAN || turn==COMPUTER) ) {
		printf("Turn(0-human or 1-computer) >> ");
		scanf("%d", &turn);
	}
	return turn;
}

int is_over(int n, int p)
{
	int i;
	
	for(i=1; i<3 && !(i!=x(n,p) && i<=n); ++i)	
		;
	return !(i<3);
}

int main(void)
{
	int num, turn, cho=0, prev;
	
	srand((unsigned)time(NULL));
	
	num = get_num();
	turn = get_turn();
	prev = rand()%4;
	while( !(cho==GIVEUP || is_over(num,prev)) ) {
		printf("\nthe current number: %d\n", num);
		printf("The x number: %d\n", x(num, prev));
		if(turn==HUMAN) {
			cho=human_choice(num, prev);
			printf("Human choive: %d\n", cho);
			if(cho!=GIVEUP) {
				turn=(turn==HUMAN ? COMPUTER : HUMAN);
				num-=cho;
				prev=cho;
			}
		}
		else {
			cho=computer_choice(num, prev);
			printf("Computer choice: %d\n", cho);
			turn=(turn==HUMAN ? COMPUTER : HUMAN);
			num-=cho;
			prev=cho;
		}	
	}
	if(turn==HUMAN)
		printf("\nComputer win.\n");
	else
		printf("\nHuman win.\n");
	return 0;
}
