#include<stdio.h>

int main()
{
	int iSelection;	/*�����������ʾ�˵���ѡ��*/

	printf("---Menu---\n");/*�����Ļ�Ĳ˵�*/
	printf("1 = Load\n");
	printf("2 = Save\n");
	printf("3 = Open\n");
	printf("other = Quit\n");

	printf("enter selection\n");	/*��ʾ��Ϣ*/
	scanf("%d",&iSelection);		/*�û�����ѡ��*/

	if(iSelection==1)			/*ѡ��Ϊ1*/
	{
		printf("Processing Load\n");
	}
	else if(iSelection==2)		/*ѡ��Ϊ2*/
	{
		printf("Processing Save\n");
	}
	else if(iSelection==3)		/*ѡ��Ϊ3*/
	{
		printf("Processing Open\n");
	}
	else						/*ѡ��Ϊ������ֵʱ*/
	{
		printf("Processing Quit\n");
	}
	return 0;
}