#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];							/*地点*/
	int iNumber;							/*顺序号*/
	struct Student* pNext;					/*指向下一个结点的指针*/
};

int iCount;			 

struct Student* Create()
{
	struct Student* pHead=NULL;	 
	struct Student* pEnd,*pNew;
	iCount=0;		 
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("请输入张敏北京一日游观光的地点：\n");
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
	free(pNew);		/*释放没有用到的空间*/
	return pHead;
}

void Print(struct Student* pHead)
{
	struct Student *pTemp;	/*循环所用的临时指针*/
	int iIndex=1;			/*表示链表中结点的序号*/

	printf("----the List has %d members:----\n",iCount);		/*消息提示*/
	printf("\n");		/*换行*/
	pTemp=pHead;			/*指针得到首结点的地址*/

	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",iIndex);
		printf("地点是: %s\n",pTemp->cName);	 
		printf("第%d个参观\n",pTemp->iNumber);	 
		printf("\n");	/*输出换行*/
		pTemp=pTemp->pNext;			/*移动临时指针到下一个结点*/
		iIndex++;									/*进行自加运算*/
	}
}


int main()
{
	struct Student* pHead;		/*定义头结点*/
	pHead=Create();				/*创建结点*/
	Print(pHead);				/*输出链表*/
	return 0;					/*程序结束*/
}
