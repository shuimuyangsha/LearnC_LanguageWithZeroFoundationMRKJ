#include<stdio.h>
#include<stdlib.h>

struct Clerk
{
	char cName[20];							/*����*/
	int iNumber;							/*ְ����*/
	struct Clerk* pNext;					/*ָ����һ������ָ��*/
};

int iCount;			/*ȫ�ֱ�����ʾ������*/

struct Clerk* Create()
{
	struct Clerk* pHead=NULL;	/*��ʼ������ͷָ��Ϊ��*/
	struct Clerk* pEnd,*pNew;
	iCount=0;		/*��ʼ��������*/
	pEnd=pNew=(struct Clerk*)malloc(sizeof(struct Clerk));
	printf("please first enter Name ,then Number\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;			/*ʹ��ָ��Ϊ��*/
			pEnd=pNew;					/*�����¼���Ľ��*/
			pHead=pNew;					/*ͷָ��ָ���׽��*/
		}
		else
		{
			pNew->pNext=NULL;		/*�½���ָ��Ϊ��*/
			pEnd->pNext=pNew;		/*ԭ����Ϊ�ڵ�ָ���½��*/
			pEnd=pNew;				/*pEndָ���½��*/
		}
		pNew=(struct Clerk*)malloc(sizeof(struct Clerk));	/*�ٴη������ڴ�ռ�*/
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);		/*�ͷ�û���õ��Ŀռ�*/
	return pHead;
}

void Print(struct Clerk* pHead)
{
	struct Clerk *pTemp;	/*ѭ�����õ���ʱָ��*/
	int iIndex=1;			/*��ʾ�����н������*/

	printf("----the List has %d members:----\n",iCount);		/*��Ϣ��ʾ*/
	printf("\n");		/*����*/
	pTemp=pHead;			/*ָ��õ��׽��ĵ�ַ*/

	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",iIndex);
		printf("the name is: %s\n",pTemp->cName);	/*�������*/
		printf("the number is: %d\n",pTemp->iNumber);	/*���ְ����*/
		printf("\n");	/*�������*/
		pTemp=pTemp->pNext;			/*�ƶ���ʱָ�뵽��һ�����*/
		iIndex++;									/*�����Լ�����*/
	}
}


int main()
{
	struct Clerk* pHead;		/*����ͷ���*/
	pHead=Create();				/*�������*/
	Print(pHead);				/*�������*/
	return 0;					/*�������*/
}
