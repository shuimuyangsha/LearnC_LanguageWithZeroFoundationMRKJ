#include<stdio.h>

int main()
{
	int iCount;								/*ѭ�����Ʊ���*/
	for(iCount=0;iCount<10;iCount++)			/*ִ��10��ѭ��*/
	{
		if(iCount==5)						/*�ж����������iCount����5����*/
		{
			printf("Continue here\n");
			continue;						/*��������ѭ��*/
		}
		printf("the counter is:%d\n",iCount);		/*���ѭ���Ĵ���*/
	}
	return 0;
}
