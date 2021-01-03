/* stringinput.cpp - 4장 String format IO ::Assign Test
학번: 201511152
이름: 허정훈
github id(login한 email주소):herjh0405@naver.com
*** 여기에 기술된 comments는 삭제하지 말기 바랍니다 ***
 입력은 name, age, height, address를 입력받아야 한다.
 집주소는 화면에서 입력받아 그 길이는 strlen를 사용하여 출력한다.
 출력은 다음과 같은 형태로 출력되어야 한다.
 1년은 8760 시간이며 #define을 사용한다.
 -----
 나의 이름은"           홍길동"입니다.
 나의 나이는"9.9999e999시간   "입니다
 나의 키는"             9.999 "인치입니다.
 나의 집 주소는"부산시 금정구 부산대학로    "입니다.
 나의 집 주소의 길이는"999     "바이트입니다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define micro_Hours 8760
int inout(void);
int main(void)
{
	printf("\n4장 Character String & Formatted IO\n");
	if (!inout())
		printf("Assign Test는 불합격입니다\n");
	else
		printf("Assign Test는 합격입니다\n");
	system("pause");
	return 0;
}

int inout() {
	int returnValue;
	float ageHour;//나이를 시간으로 계산한 결과
	/* name은 char string으로, age는 short int로, height는 short int로, address는 char string
	으로 변수를 선언하는 코드를 작성한다
	*/
	char name[40];
	int age;
	int height;
	char address[40];
	float addresssize = strlen(address);
	/*
	scanf를 사용하여 name, age, height, address를 입력받는다
	*/
	scanf("%s %d %d %s", name, &age, &height, address);
	
	/*
	입력받는 나이를 agehour를 #define으로 선언된 macro HOURS를 사용한다.
	*/
	ageHour = float(micro_Hours*age);
	/*
	문제에서 제시된 내용대로 출력하기
	*/
	printf("나의 이름은 %15s입니다.\n",name); //이름 출력
	printf("나의 나이는 %15.2f시간입니다.\n",ageHour); //나이 출력
	printf("나의 키는 %15.2f인치입니다.\n",float(height*2.54)); //키 출력
	printf("나의 집 주소는 %15s입니다.\n",address); //집주소 출력
	returnValue = printf("나의 집 주소의 길이는 %fbyte입니다.\n",addresssize);//집주소 길이
	return returnValue;

}