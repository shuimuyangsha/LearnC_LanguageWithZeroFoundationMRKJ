#include<stdio.h>	                            /*����ͷ�ļ�*/

int main()                                      /*������main*/
{
	int iValue;                                 /*�������iValue*/
	iValue=7;									/*Ϊ����iValue��ֵ*/
	iValue+=iValue*=iValue/=iValue-5;           /*����õ�iValue����ֵ*/
	printf("the result is %d\n",iValue); 	    /*�����������*/
	return 0;                                   /*�������*/
}
