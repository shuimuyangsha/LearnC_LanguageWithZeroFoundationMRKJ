#include<stdio.h>                           /*����ͷ�ļ�*/
struct Book	                                /*����ͼ��ṹ��*/							 
{
	char cName[20];                         /*������*/							 
	int  iNumber;                           /*��ܱ��*/							 
	char cS[20];                            /*ͼ����*/							 
		
}book={"electric",56,"134-467"};            /*�Խṹ�������ʼ��*/		 
int main()                                  /*������main*/
{
	struct  Book* pStruct;                  /*����ṹ������ָ��*/			 
	pStruct=&book;                          /*ָ��ָ��ṹ�����*/					 
	printf("-----the bookcase's information-----\n");/*��ʾ��Ϣ*/	 
	printf("��������: %s\n",(*pStruct).cName);     /*ʹ��ָ������ṹ���Ա*/		 
	printf("��ܱ��: %d\n",(*pStruct).iNumber); 
	printf("ͼ����: %s\n",(*pStruct).cS); 
	return 0;                                        /*�������*/
}