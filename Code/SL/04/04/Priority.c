#include<stdio.h>

int main()
{
	int iNumber1,iNumber2,iNumber3,iResult=0;/*�������ͱ���*/
	iNumber1=5;		/*Ϊ������ֵ*/
	iNumber2=6;		
	iNumber3=9;

	iResult=iNumber1+iNumber2-iNumber3;/*�ӷ����������ʽ*/
	printf("the result is : %d\n",iResult);/*��ʾ���*/

	iResult=iNumber1+iNumber2*iNumber3;/*�ӷ����˷����ʽ*/
	printf("the result is : %d\n",iResult);/*��ʾ���*/

	iResult=(iNumber1+iNumber2)*iNumber3;/*���ţ��ӷ����˷����ʽ*/
	printf("the result is : %d\n",iResult);/*��ʾ���*/

	return 0;
}