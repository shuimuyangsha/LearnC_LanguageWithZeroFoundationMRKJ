#include<stdio.h>

void AddOne()
{
	static int iInt=1;				/*�������ͱ���*/
	iInt=iInt+1;					/*������1*/
	printf("%d\n",iInt);			/*��ʾ���*/
}
int main()
{
	printf("��һ�ε��ã�");			/*��ʾ���*/
	AddOne();				/*����Show����*/
	printf("�ڶ��ε��ã�");			/*��ʾ���*/
	AddOne();				/*����Show����*/
	return 0;			/*�������*/
}