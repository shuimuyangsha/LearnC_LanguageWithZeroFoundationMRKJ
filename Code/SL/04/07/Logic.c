#include<stdio.h>

int main()
{
	int iNumber1,iNumber2;	    /*��������*/
	iNumber1=88;				/*Ϊ������ֵ*/
	iNumber2=0;

	printf("the 1 is Ture , 0 is False\n");                         /*��ʾ��ʾ��Ϣ*/
	printf("5< iNumber1&&iNumber2 is %d\n",5<iNumber1&&iNumber2);	/*��ʾ�߼�����ʽ�Ľ��*/
	printf("5< iNumber1||iNumber2 is %d\n",5<iNumber1||iNumber2);	/*��ʾ�߼�����ʽ�Ľ��*/
	iNumber2=!!iNumber1;	                                        /*�õ�iNumber1���߼�ֵ*/
	printf("iNumber2 is %d\n",iNumber2);	                        /*����߼�ֵ*/
	return 0;
}