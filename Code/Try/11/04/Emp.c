#include<stdio.h>

int main()
{
	struct People								 
	{
		char cName[20];							 
		int  iNumber;							 
		char cS[20];							 
		
	}people={"张伟",14,"开发部"};		 

	struct  People* pStruct;			 
	pStruct=&people;					 
	printf("-----the  information-----\n");	 
	printf("姓名: %s\n",(*pStruct).cName);		 
	printf("职工号: %d\n",(*pStruct).iNumber);
	printf("部门: %s\n",(*pStruct).cS);
	return 0;
}