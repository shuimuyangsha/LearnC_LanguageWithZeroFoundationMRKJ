#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];							/*福名*/
	int iNumber;							 
	struct Student* pNext;					 
};

int iCount;		 

struct Student* Create()
{
	struct Student* pHead=NULL;	 
	struct Student* pEnd,*pNew;
	iCount=0;	 
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("请输入集到3个福\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;			 
			pEnd=pNew;				 
			pHead=pNew;				 
		}
		else
		{
			pNew->pNext=NULL;	 
			pEnd->pNext=pNew;		 
			pEnd=pNew;			 
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));	 
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);		 
	return pHead;
}

void Print(struct Student* pHead)
{
	struct Student *pTemp;	 
	int iIndex=1;		 

	printf("----the List has %d members:----\n",iCount);	 
	printf("\n");		 
	pTemp=pHead;			 

	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",iIndex);
		printf("the name is: %s\n",pTemp->cName);	 
		printf("the number is: %d\n",pTemp->iNumber);	 
		printf("\n");	 
		pTemp=pTemp->pNext;			 
		iIndex++;								 
	}
}


int main()
{
	struct Student* pHead;		 
	pHead=Create();				 
	Print(pHead);				 
	return 0;				 
}
