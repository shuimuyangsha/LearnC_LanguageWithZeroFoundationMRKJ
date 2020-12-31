#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];							/*�ص�*/
	int iNumber;							/*˳���*/
	struct Student* pNext;					/*ָ����һ������ָ��*/
};

int iCount;			 

struct Student* Create()
{
	struct Student* pHead=NULL;	 
	struct Student* pEnd,*pNew;
	iCount=0;		 
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("��������������һ���ι۹�ĵص㣺\n");
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
	free(pNew);		/*�ͷ�û���õ��Ŀռ�*/
	return pHead;
}

void Print(struct Student* pHead)
{
	struct Student *pTemp;	/*ѭ�����õ���ʱָ��*/
	int iIndex=1;			/*��ʾ�����н������*/

	printf("----the List has %d members:----\n",iCount);		/*��Ϣ��ʾ*/
	printf("\n");		/*����*/
	pTemp=pHead;			/*ָ��õ��׽��ĵ�ַ*/

	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",iIndex);
		printf("�ص���: %s\n",pTemp->cName);	 
		printf("��%d���ι�\n",pTemp->iNumber);	 
		printf("\n");	/*�������*/
		pTemp=pTemp->pNext;			/*�ƶ���ʱָ�뵽��һ�����*/
		iIndex++;									/*�����Լ�����*/
	}
}


int main()
{
	struct Student* pHead;		/*����ͷ���*/
	pHead=Create();				/*�������*/
	Print(pHead);				/*�������*/
	return 0;					/*�������*/
}
