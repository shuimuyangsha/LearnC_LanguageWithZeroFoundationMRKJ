#include<stdio.h>

int main()
{
	int iNumber1,iNumber2,iNumber3;			/*��������*/
	iNumber1=3;								/*Ϊ������ֵ*/
	iNumber2=7;
			
	printf("the first number is :%d\n",iNumber1);/*��ʾ����ֵ*/
	printf("the second number is :%d\n",iNumber2);

	iNumber3=iNumber1+10;					/*���ʽ�����ñ���iNumber1����һ������*/
	printf("the first number add 10 is :%d\n",iNumber3);/*��ʾiNumber3��ֵ*/
				
	iNumber3=iNumber2+10;					/*���ʽ�����ñ���iNumber2����һ������*/
	printf("the second number add 10 is :%d\n",iNumber3);/*��ʾiNumber3��ֵ*/

	iNumber3=iNumber1+iNumber2;				/*���ʽ���������������м���*/
	printf("the result number of first add second is :%d\n",iNumber3);/*�����������*/

	return 0; /*�������*/
}