#include<stdio.h>

int main()
{
	int iTotal,iValue,iDetail;/*��������*/
	iTotal=100; /*Ϊ������ֵ*/
	iValue=50;	
	iDetail=5;

	iValue*=iDetail;	/*����õ�iValue����ֵ*/
	iTotal+=iValue;		/*����õ�iTotal����ֵ*/
	printf("Value is: %d\n",iValue);	/*��ʾ������*/
	printf("Total is: %d\n",iTotal);
	return 0;
}