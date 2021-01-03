// Listing 6.16 The entry.c Program
/* entry.c -- entry condition loop */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int secret_code = 13;
	int code_entered;
	printf("To enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secret code number= 13: ");
	scanf("%d", &code_entered);
	while (code_entered != secret_code)
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	}
	printf("Congratulations! You are cured!\n");
	system("pause");
	return 0;
}
