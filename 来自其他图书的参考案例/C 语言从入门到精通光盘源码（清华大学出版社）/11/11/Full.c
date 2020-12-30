#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];						/*姓名*/
	int iNumber;							/*学号*/
	struct Student* pNext;					/*指向下一个结点的指针*/
};

int iCount;									/*全局变量表示链表长度*/

struct Student* Create()
{
	struct Student* pHead=NULL;				/*初始化链表头指针为空*/
	struct Student* pEnd,*pNew;
	iCount=0;								/*初始化链表长度*/
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("please first enter Name ,then Number\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;			/*使得指向为空*/
			pEnd=pNew;					/*跟踪新加入的结点*/
			pHead=pNew;					/*头指针指向首结点*/
		}
		else
		{
			pNew->pNext=NULL;			/*新结点的指针为空*/
			pEnd->pNext=pNew;				/*原来的为结点指向新结点*/
			pEnd=pNew;					/*pEnd指向新结点*/
		}
		pNew=(struct Student*)malloc(sizeof(struct Student));	/*再次分配结点内存空间*/
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);							/*释放没有用到的空间*/
	return pHead;
}

void Print(struct Student* pHead)
{
	struct Student *pTemp;					/*循环所用的临时指针*/
	int iIndex=1;							/*表示链表中结点的序号*/

	printf("----the List has %d members:----\n",iCount);		/*消息提示*/
	printf("\n");							/*换行*/
	pTemp=pHead;							/*指针得到首结点的地址*/

	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",iIndex);
		printf("the name is: %s\n",pTemp->cName);		/*输出姓名*/
		printf("the number is: %d\n",pTemp->iNumber);		/*输出学号*/
		printf("\n");						/*输出换行*/
		pTemp=pTemp->pNext;				/*移动临时指针到下一个结点*/
		iIndex++;							/*进行自加运算*/
	}
}

struct Student* Insert(struct Student* pHead)
{
	struct Student* pNew;		/*指向新分配的空间*/
	printf("----Insert member at first----\n");	/*提示信息*/
	pNew=(struct Student*)malloc(sizeof(struct Student));	/*分配内存空间，并返回指向该内存空间的指针*/

	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);

	pNew->pNext=pHead;			/*新结点指针指向原来的首结点*/
	pHead=pNew;					/*头指针指向新结点*/
	iCount++;					/*增加链表结点数量*/
	return pHead;
}

void Delete(struct Student* pHead,int iIndex)	/*pHead表示头结点，iIndex表示要删除的结点下标*/
{
	int i;  /*控制循环变量*/
	struct Student* pTemp;		 /*临时指针*/
	struct Student* pPre;		/*表示要删除结点前的结点*/
	pTemp=pHead;				/*得到头结点*/
	pPre=pTemp;					

	printf("----delete NO%d member----\n",iIndex);	/*提示信息*/
	for(i=1;i<iIndex;i++)		/*for循环使得pTemp指向要删除的结点*/
	{
		pPre=pTemp;
		pTemp=pTemp->pNext;
	}
	pPre->pNext=pTemp->pNext;	/*连接删除结点两边的结点*/
	free(pTemp);				/*释放掉要删除结点的内存空间*/
	iCount--;					/*减少链表中的元素个数*/
}

int main()
{
	struct Student* pHead;					/*定义头结点*/
	pHead=Create();							/*创建结点*/
	pHead=Insert(pHead);					/*插入结点*/
	Delete(pHead,2);						/*删除第二个结点的操作*/
	Print(pHead);							/*输出链表*/
	return 0;								/*程序结束*/
}
