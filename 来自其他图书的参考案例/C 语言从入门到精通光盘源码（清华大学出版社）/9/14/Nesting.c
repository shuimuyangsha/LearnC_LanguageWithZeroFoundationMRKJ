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
	printf("The CEO's working is telling Manager\n");
	Manager();/*����CEO�Ĺ��ܺ���*/
}

void  Manager()
{
	/*�����Ϣ����ʾ����Manager����������Ӧ�Ĳ���*/
	printf("The Manager's working's work is telling AssistantManager\n");
	AssistantManager();/*����CEO�����ú���*/
}

void  AssistantManager()
{
	/*�����Ϣ����ʾ����AssistantManager����������Ӧ�Ĳ���*/
	printf("The AssistantManager's work is telling Clerk\n");
	Clerk();/*����CEO�����ú���*/
}

void Clerk()
{
	/*�����Ϣ����ʾ����Clerk����������Ӧ�Ĳ���*/
	printf("The Clerk's work is making it\n");
}