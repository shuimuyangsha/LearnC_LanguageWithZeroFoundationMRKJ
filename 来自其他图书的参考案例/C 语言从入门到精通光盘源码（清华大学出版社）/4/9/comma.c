#include<stdio.h>

int main()
{
	int iValue1,iValue2,iValue3,iResult;	/*����������ʹ�ö��������*/
	/*Ϊ������ֵ*/
	iValue1=10;	
	iValue2=43;
	iValue3=26;
	iResult=0;

	iResult=iValue1++,--iValue2,iValue3+4;	/*���㶺�ű��ʽ*/
	printf("the result is :%d\n",iResult);/*����������ʾ*/

	iResult=(iValue1++,--iValue2,iValue3+4);/*���㶺�ű��ʽ*/
	printf("the result is :%d\n",iResult);/*����������ʾ*/
	return 0;		/*�������*/
}