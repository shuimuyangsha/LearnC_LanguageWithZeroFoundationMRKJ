#include<stdio.h>

int main()
{
	struct People								 
	{
		char cName[20];							 
		int  iNumber;							 
		char cS[20];							 
		
	}people={"��ΰ",14,"������"};		 

	struct  People* pStruct;			 
	pStruct=&people;					 
	printf("-----the  information-----\n");	 
	printf("����: %s\n",(*pStruct).cName);		 
	printf("ְ����: %d\n",(*pStruct).iNumber);
	printf("����: %s\n",(*pStruct).cS);
	return 0;
}