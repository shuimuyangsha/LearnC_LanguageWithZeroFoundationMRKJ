#include<stdio.h>

void ShowMember(int iMember);		/*��������*/

int main()
{
	int iCount[10];					/*����һ�����͵�����*/
	int i;							/*�������ͱ���������ѭ��*/

	for(i=0;i<10;i++)				/*���и�ֵѭ��*/
	{
		iCount[i]=i;	
	}


	for(i=0;i<10;i++)				/*ѭ������*/
	{
		ShowMember(iCount[i]);		/*ִ�������������*/
	}
	return 0;
}

void ShowMember(int iMember)		/*��������*/
{
	printf("Show the member is%d\n",iMember);		/*�������*/
}

