#include<stdio.h>

int main()
{
	int iDay=0;	/*���������ʾ���������*/
	/*�����������һ���е�ÿһ��*/
	int Monday=1,Tuesday=2,Wednesday=3,Thursday=4,
		Friday=5,Saturday=6,Sunday=7;

	printf("enter a day of week to get course:\n");/*��ʾ��Ϣ*/
	scanf("%d",&iDay);		/*��������*/

	if(iDay>Friday)			/*��Ϣ�յ����*/
	{
		if(iDay==Saturday)	/*Ϊ����ʱ*/
		{
			printf("Go shopping with friends\n");
		}
		else				/*Ϊ����ʱ*/
		{
			printf("At home with families\n");
		}
	}
	else					/*�����յ����*/
	{
		if(iDay=Monday)		/*Ϊ��һʱ*/
		{
			printf("Have a meeting in the company\n");
		}	
		else				/*Ϊ��������ʱ*/		
		{
			printf("Working with partner\n");
		}
	}

	return 0;/*�������*/
}
