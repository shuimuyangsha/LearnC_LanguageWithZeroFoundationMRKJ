#include<stdio.h>

int main()
{
	int iCount;								/*ѭ�����Ʊ���*/
	for(iCount=0;iCount<10;iCount++)			/*ִ��10��ѭ��*/
	{
		if(iCount==5)						/*�ж����������iCount����5����*/
		{
			printf("Feed the children to drink water\n");
			continue;						/*��������ѭ��*/
		}
		printf("%d\n",iCount);		/*���ѭ���Ĵ���*/
	}
	return 0;
}
