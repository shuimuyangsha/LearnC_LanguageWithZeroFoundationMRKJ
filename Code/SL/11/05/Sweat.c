#include<stdio.h>               /*����ͷ�ļ�*/
#include<string.h>


struct Sweat                    /*�����·��ṹ��*/						 
{
	char cName[20];	            /*�·����*/				 
	int  iNumber;               /*�·��۸�*/						 
	char cColor[20];            /*�·���ɫ*/						 
}sweat;	                        /*�������*/						 

int main()                      /*������main*/
{

	struct Sweat* pStruct;      /*����ṹ�����*/					 
	pStruct=&sweat;	            /*ָ��ָ��ṹ�����*/					 

	strcpy(pStruct->cName,"ë������");	         /*��ֵ���*/ 
	pStruct->iNumber=599;                        /*��ֵ�۸�*/				 
    strcpy(pStruct->cColor,"��ɫ");              /*��ֵ��ɫ*/

	printf("-----the sweat's information-----\n");/*��ʾ��Ϣ*/	 
	printf("����: %s\n",sweat.cName);             /*����ṹ���Ա*/	 
	printf("�۸�: %dԪ\n",sweat.iNumber);
	printf("��ɫ: %s\n",sweat.cColor);
	return 0;                                     /*�������*/
}
