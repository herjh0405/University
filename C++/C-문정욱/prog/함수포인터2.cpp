#include <stdio.h>





/*
int cmp(int v1,int v2)
{
	return v1>v2;
	return v1<v2; //sort�� �����ϴϱ� �̷��� ������ �Լ��� �����ؼ� �ٲٰ� �ʹ�. 
}
//�̷��� �Լ��� ����� ������ sort�Լ��� ������ ���� �ʰ� ������ �ٲܼ��ִ�. 
*/


void sort(int a[],int len,int(* pf)(int,int)) //�Լ� ���ڷ� ���� �������� 
{
	int i,j,temp;
	

	for(i=0;i<len-1;++i){
		for(j=i+1;j<len;++j)	
			if(pf(a[i],a[j])){ // >�� ���� ���������� 
							 // <�� ���� ���������� 
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}
}
//sort�Լ��� �ε�ȣ�� ������������ �츮�� ���ϴ� ������ ���� �� �� ������


//���࿡ sort�ؿ� ������  
int increase(int v1,int v2)
{
	
	/*
	if(v1>v2) return 1;
	else	return 0;
	*/
	return v1-v2 > 0 ; //������  
}

int decrease(int v1,int v2)
{
	return v1-v2<0; //������  
}

int main(void)
{
	int a[] = {3,1,5,2,9}; // {1,2,3,5,9}
	int len = sizeof(a)/sizeof(*a);
	int i;
	
/*�ΰ��� ������ �Ҷ� �Ű������� ����ϴ� �溡
	// a[0] <--> a[1]
	
	temp = a[i]; //3�̶�� ���� ����������� ������ ���� 
	a[i] = a[j]; //{1,1,5,2,9}	
	a[j] = temp; //{1,1,5,2,9}
	
*/
	
/*�ּڰ��� ���� ������ �ΰ� ������
	
	for(i=0;i<len-1;++i){
		for(j=i+1;j<len;++j)	
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}


//���ȭ�� ���Ѻ���

	�Է� : a(�迭),len
	
	for(i=0;i<len-1;++i){
		for(j=i+1;j<len;++j)	
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}
	
	��� : a(�迭) <<<<<������ �迭�� ��ȯ�� ���� �ʰ� �޸𸮸� ���� �ϱ� ������ 
		   ���� ��ȯ������ �ʿ䰡 ����
		    

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

