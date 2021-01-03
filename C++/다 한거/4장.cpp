/* stringinput.cpp - 4�� String format IO ::Assign Test
�й�: 201511152
�̸�: ������
github id(login�� email�ּ�):herjh0405@naver.com
*** ���⿡ ����� comments�� �������� ���� �ٶ��ϴ� ***
 �Է��� name, age, height, address�� �Է¹޾ƾ� �Ѵ�.
 ���ּҴ� ȭ�鿡�� �Է¹޾� �� ���̴� strlen�� ����Ͽ� ����Ѵ�.
 ����� ������ ���� ���·� ��µǾ�� �Ѵ�.
 1���� 8760 �ð��̸� #define�� ����Ѵ�.
 -----
 ���� �̸���"           ȫ�浿"�Դϴ�.
 ���� ���̴�"9.9999e999�ð�   "�Դϴ�
 ���� Ű��"             9.999 "��ġ�Դϴ�.
 ���� �� �ּҴ�"�λ�� ������ �λ���з�    "�Դϴ�.
 ���� �� �ּ��� ���̴�"999     "����Ʈ�Դϴ�.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define micro_Hours 8760
int inout(void);
int main(void)
{
	printf("\n4�� Character String & Formatted IO\n");
	if (!inout())
		printf("Assign Test�� ���հ��Դϴ�\n");
	else
		printf("Assign Test�� �հ��Դϴ�\n");
	system("pause");
	return 0;
}

int inout() {
	int returnValue;
	float ageHour;//���̸� �ð����� ����� ���
	/* name�� char string����, age�� short int��, height�� short int��, address�� char string
	���� ������ �����ϴ� �ڵ带 �ۼ��Ѵ�
	*/
	char name[40];
	int age;
	int height;
	char address[40];
	float addresssize = strlen(address);
	/*
	scanf�� ����Ͽ� name, age, height, address�� �Է¹޴´�
	*/
	scanf("%s %d %d %s", name, &age, &height, address);
	
	/*
	�Է¹޴� ���̸� agehour�� #define���� ����� macro HOURS�� ����Ѵ�.
	*/
	ageHour = float(micro_Hours*age);
	/*
	�������� ���õ� ������ ����ϱ�
	*/
	printf("���� �̸��� %15s�Դϴ�.\n",name); //�̸� ���
	printf("���� ���̴� %15.2f�ð��Դϴ�.\n",ageHour); //���� ���
	printf("���� Ű�� %15.2f��ġ�Դϴ�.\n",float(height*2.54)); //Ű ���
	printf("���� �� �ּҴ� %15s�Դϴ�.\n",address); //���ּ� ���
	returnValue = printf("���� �� �ּ��� ���̴� %fbyte�Դϴ�.\n",addresssize);//���ּ� ����
	return returnValue;

}