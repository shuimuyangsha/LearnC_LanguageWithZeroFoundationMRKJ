#include<stdio.h>

int main()
{
	int iNumber;	/*�����������ʾ1��100�������*/
	int iSum=0;		/*��������Ľ��*/
	/*ʹ��forѭ��*/
	for(iNumber=1;iNumber<=100;iNumber++)
	{
		iSum=iNumber+iSum;              /*�ۼӼ���*/
	}
	printf("the result is:%d\n",iSum);/*���������*/

	iSum=0;			                /*�ָ�������*/
	iNumber=1;		                /*�趨ѭ�����Ʊ����ĳ�ֵ*/
	while(iNumber<=100)
	{
		iSum=iSum+iNumber;	/*�ۼӼ���*/
		iNumber++;	
	}
	printf("the result is:%d\n",iSum);/*���������*/
	return 0;
}

