#include<stdio.h>

int main() 
{
	int iMonth=0,iDay=0;		/*�������*/
	printf("enter the month you want to know the days\n");/*��ʾ��Ϣ*/
	scanf("%d",&iMonth);		/*��������*/
	switch(iMonth)				/*�������*/
	{
		/*��·����ģʽswitch�����м���*/
	case 1:			/*1��ʾһ�·�*/
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:					
	case 12:
		iDay=31;	/*ΪiDay��ֵΪ31*/
		break;		/*����switch�ṹ*/
	case 4:
	case 6:
	case 9:
	case 11:
		iDay=30;	/*ΪiDay��ֵΪ30*/
		break;		/*����switch�ṹ*/
	case 2:
		iDay=28;	/*ΪiDay��ֵΪ28*/
		break;		/*����switch�ṹ*/
	default:		/*Ĭ�����*/
		iDay=-1;	/*��ֵΪ-1*/
		break;		/*����switch�ṹ*/
	}

	if(iDay==-1)	/*ʹ��if����ж�iDay��ֵ*/
	{
		printf("there is a error with you enter\n");
	}
	else		/*Ĭ�ϵ����*/
	{
		printf("2017.%d has %d days\n",iMonth,iDay);
	}
	return  0;
}