#include<stdio.h>

int main()
{
	int iCount;/*ѭ�����Ʊ���*/
	for(iCount=0;iCount<10;iCount++)/*ִ��10��ѭ��*/
	{
		if(iCount==5)	/*�ж����������iCount����5����*/
		{
			printf("Find a true friend\n");
			break;	/*����ѭ��*/
		}
		printf("Friend %d\n",iCount);/*���ѭ���Ĵ���*/
	}
	return 0;
}