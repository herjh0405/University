#include <stdio.h>





/*
int cmp(int v1,int v2)
{
	return v1>v2;
	return v1<v2; //sort는 복잡하니까 이렇게 간단한 함수를 수정해서 바꾸고 싶다. 
}
//이렇게 함수를 만들어 놓으면 sort함수는 수정을 하지 않고 차순을 바꿀수있다. 
*/


void sort(int a[],int len,int(* pf)(int,int)) //함수 인자로 만들어서 전달을하 
{
	int i,j,temp;
	

	for(i=0;i<len-1;++i){
		for(j=i+1;j<len;++j)	
			if(pf(a[i],a[j])){ // >를 쓰면 오름차정렬 
							 // <를 쓰면 내림차정렬 
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}
}
//sort함수의 부등호를 변경하지말고 우리가 원하는 방향대로 정렬 할 수 있을까


//만약에 sort밑에 있으면  
int increase(int v1,int v2)
{
	
	/*
	if(v1>v2) return 1;
	else	return 0;
	*/
	return v1-v2 > 0 ; //오름차  
}

int decrease(int v1,int v2)
{
	return v1-v2<0; //내림차  
}

int main(void)
{
	int a[] = {3,1,5,2,9}; // {1,2,3,5,9}
	int len = sizeof(a)/sizeof(*a);
	int i;
	
/*두값을 스와핑 할때 매개변수를 사용하는 방벙
	// a[0] <--> a[1]
	
	temp = a[i]; //3이라는 값이 사라지기전에 보관을 하자 
	a[i] = a[j]; //{1,1,5,2,9}	
	a[j] = temp; //{1,1,5,2,9}
	
*/
	
/*최솟값을 제일 앞으로 두고 싶을때
	
	for(i=0;i<len-1;++i){
		for(j=i+1;j<len;++j)	
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}


//모듈화를 시켜보자

	입력 : a(배열),len
	
	for(i=0;i<len-1;++i){
		for(j=i+1;j<len;++j)	
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}
	
	출력 : a(배열) <<<<<하지만 배열은 반환이 되지 않고 메모리를 공유 하기 때문에 
		   따로 반환시켜줄 필요가 없다
		    

*/
	sort(a,len,&increase);

	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");

	sort(a,len,&decrease);

	for(i=0;i<len;++i)
		printf("%d ",a[i]);
	printf("\n");
	return 0;





}

