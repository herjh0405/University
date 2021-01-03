/*
�й�: 201511152	
�̸�: ������
github id: herjh0405@naver.com
������ ��ȣ �Է�: 63081
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 81        
#define LIM 10      
void stsrt(char* [], int);/* string-sort function */
char* s_gets(char*, int);
void enterString(char* [], int);
void displayString(char* [], int);
int findWord(char* [], int);
void copyArrayString(char* [], int, char* [], int);
int main(void)
{
	char inputString[LIM][SIZE];     /* array to store input       */
	char* ptstr[LIM];
	char outputString[LIM][SIZE];
	char* optstr[LIM];
	int count = 0;
	char word[20];
	for (int n = 0; n < LIM; n++)
		ptstr[n] = inputString[n];
	for (int n = 0; n < LIM; n++)
		optstr[n] = outputString[n];
	int select;
	printf("\nSelect command: 1. String �Է�, 2. String ���, 3. Sort String, 4. find word, 5. string �迭�� ����, 6. ����:");
	scanf("%d", &select);
	while ((getchar()) != '\n');
	while (select != 6)
	{
		switch (select)
		{
		case 1: //10�� string �Է�
			printf("\nString �Է�: ");
			enterString(ptstr, LIM);
			break;
		case 2: //�Էµ� string ��ü�� ���
			printf("\nString ���: ");
			displayString(ptstr, LIM);
			break;
		case 3:
			printf("\nSort String: ");
			stsrt(ptstr, LIM);
			displayString(ptstr, LIM);
		case 4:
			printf("\n�ܾ� ã�⿡ ���� string: ");
			scanf("%c", word);
			while ((getchar()) != '\n');
			printf("%s", word);
			count = findWord(ptstr, LIM);
			printf("\n%s �ܾ�� %d ���ȴ�", word, LIM);
			break;
		case 5:
			printf("\nString �迭�� ����: ");
			copyArrayString(ptstr, LIM, optstr, LIM);
			displayString(optstr, LIM);
			break;
		case 6:
			break;
		default:
			printf("Re-Enter\n");
		}
		printf("\nSelect command: 1. String �Է�, 2. String ���, 3. Sort String, 4. find word, 5. string �迭�� ����, 6. ����:");
		scanf("%d", &select);
		while ((getchar()) != '\n');
	}
	system("pause");
	return 0;
}
void enterString(char* str[LIM], const int count)
{
	int i = 0;
	int j;
	while (i < LIM && s_gets(str[i], count) != NULL && str[i][0] != '\0')
	{
		++i;
		while (1)
		{
			for (j = 0; j < i; ++j)
				if (strcmp(str[i], str[j]) == 0)
					printf("�Է�");
					s_gets(str[i], count);
		}
	}
}
void displayString(char* str[LIM], const int count)
{
	int i, j;
	for (i = 0; i < LIM; ++i) {
		for (j = 0; j < count; ++j)
		{
			puts(str[i]);
		}
	}
}
int findWord(char* a[], int n)
{
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n - i; ++j)
		{
			if (strcmp(a[i], a[j]) == 0)
				++k;
		}
		return k;
	}
}
void copyArrayString(char* a[], int n, char* b[], int m)
{
	for (int i = 0; i < n; ++i)
	{
		strcpy(b[i], a[i]);
	}
}
/* string-pointer-sorting function */
void stsrt(char* strings[], int num)
{
	char* temp;
	int top, seek;

	for (top = 0; top < num - 1; top++)
		for (seek = top + 1; seek < num; seek++)
			if (strcmp(strings[top], strings[seek]) > 0)
			{
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			}
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else // must have words[i] == '\0'
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}