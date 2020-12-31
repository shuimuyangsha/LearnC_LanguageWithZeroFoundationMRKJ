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

	strcpy(pStruct->cName,"张伟");	 
	pStruct->iNumber=285;				 
    strcpy(pStruct->cSex,"长春-北京");
    strcpy(pStruct->cAddress,"D71");
    strcpy(pStruct->c,"2017年1月20日09:08开");
	printf("姓名: %s\n",ticket.cName);	 
	printf("票价: %d元\n",ticket.iNumber);
	printf("乘车区间: %s\n",ticket.cSex);
    printf("车次: %s\n",ticket.cAddress);
    printf("开车时间: %s\n",ticket.c);
	return 0;
}
