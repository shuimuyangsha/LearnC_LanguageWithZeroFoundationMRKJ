#include<stdio.h>

int main()
{
	int iNumber1,iNumber2,iNumber3,iResult=0;/*�������ͱ���*/
	iNumber1=20;		/*Ϊ������ֵ*/
	iNumber2=5;		
	iNumber3=2;

	iResult=iNumber1+iNumber2-iNumber3;/*�ӷ����������ʽ*/
	printf("the result is : %d\n",iResult);/**/

	iResult=iNumber1-iNumber2+iNumber3;/*�������ӷ����ʽ*/
	printf("the result is : %d\n",iResult);/*��ʾ���*/

	iResult=iNumber1+iNumber2*iNumber3;/*�ӷ����˷����ʽ*/
	printf("the result is : %d\n",iResult);/*��ʾ���*/

	iResult=iNumber1/iNumber2*iNumber3;/*�������˷����ʽ*/
	printf("the result is : %d\n",iResult);/*��ʾ���*/

	iResult=(iNumber1+iNumber2)*iNumber3;/*���ţ��ӷ����˷����ʽ*/
	printf("the result is : %d\n",iResult);/*��ʾ���*/

	return 0;
}