#include<stdio.h>
#include<string.h>


struct Ticket						 
{
	char cName[20];					 
	int  iNumber;						 
	char cSex[20];
    char cAddress[20];
    char c[20];
}ticket;							 

int main()
{

	struct Ticket* pStruct;					 
	pStruct=&ticket;						 

	strcpy(pStruct->cName,"��ΰ");	 
	pStruct->iNumber=285;				 
    strcpy(pStruct->cSex,"����-����");
    strcpy(pStruct->cAddress,"D71");
    strcpy(pStruct->c,"2017��1��20��09:08��");
	printf("����: %s\n",ticket.cName);	 
	printf("Ʊ��: %dԪ\n",ticket.iNumber);
	printf("�˳�����: %s\n",ticket.cSex);
    printf("����: %s\n",ticket.cAddress);
    printf("����ʱ��: %s\n",ticket.c);
	return 0;
}
