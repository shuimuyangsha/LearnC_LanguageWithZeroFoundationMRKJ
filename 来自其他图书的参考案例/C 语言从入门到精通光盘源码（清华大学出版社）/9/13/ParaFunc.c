#include<stdio.h>

/*�����������������мӷ�����*/
int AddTwoNum(int iNum1, int iNum2);

int main()
{
	int iResult;							/*������������洢������*/
	
	iResult=AddTwoNum(10,AddTwoNum(3,5));			/*�ڲ������е��ú���AddTwoNum*/
	printf("The result is : %d\n",iResult);			/*���������������*/
	return 0;								/*�������*/
}

int AddTwoNum(int iNum1, int iNum2)			/*���庯��*/
{
	int iTempResult;						/*�������ͱ���*/
	iTempResult=iNum1+iNum2;				/*���мӷ����㣬���������ֵ��iTempResult*/
	return iTempResult;						/*���ؼ�����*/
}
