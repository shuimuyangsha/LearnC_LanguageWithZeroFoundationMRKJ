#include<stdio.h>/*����ͷ�ļ�*/

void Scrip(char* lead);			 /*��������*/

int main()
{
	char cSelect[]="";			/*�����ַ��������*/
	printf("����ѡ��������:");	/*�����Ϣ��ʾ*/
	scanf("%s",&cSelect);
	Scrip(cSelect);			/*��ʵ�ʲ������ݸ���ʽ����*/
	return 0;					/*�������*/
}

/*��Ա��ʼ�ݳ�����籾*/
void Scrip(char* lead)			/*leadΪ��ʽ����*/	
{
	printf("%s��ʼ��������籾\n",lead);/*�����ʾ�����ݾ籾*/
}