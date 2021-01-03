// Listing 6.15 The do_while.c Program
/* do_while.c -- exit condition loop */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int secret_code = 13;
	int code_entered;
	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number = 13: ");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations! You are cured!\n");
	system("pause");
	return 0;
}
