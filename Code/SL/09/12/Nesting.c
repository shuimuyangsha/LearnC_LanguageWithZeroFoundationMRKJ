#include<stdio.h>


void  CEO();				/*��������*/
void  Manager();
void  AssistantManager();
void  Clerk();

int main()
{
	CEO();					/*����CEO�����ú���*/
	return 0;
}

void  CEO()
{
	/*�����Ϣ����ʾ����CEO����������Ӧ�Ĳ���*/
	printf("CEO������������\n");
	Manager();              /*����CEO�Ĺ��ܺ���*/
}

void  Manager()
{
	/*�����Ϣ����ʾ����Manager����������Ӧ�Ĳ���*/
	printf("�����������������\n");
	AssistantManager();         /*����CEO�����ú���*/
}

void  AssistantManager()
{
	/*�����Ϣ����ʾ����AssistantManager����������Ӧ�Ĳ���*/
	printf("�������ְԱ��������\n");
	Clerk();/*����CEO�����ú���*/
}

void Clerk()
{
	/*�����Ϣ����ʾ����Clerk����������Ӧ�Ĳ���*/
	printf("ְԱִ������\n");
}