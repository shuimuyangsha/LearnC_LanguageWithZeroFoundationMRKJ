#include<stdio.h>

int main()
{
	int iNumber1,iNumber2;			/*�������*/
	
	printf("please enter two numbers:\n");	/*��Ϣ��ʾ*/	
	scanf("%d%d",&iNumber1,&iNumber2);		/*��������*/	
	if(iNumber1>iNumber2)	/*�ж�iNumber1�Ƿ����iNumber2*/
	{
		printf("the bigger number is %d\n",iNumber1);
	}
	else/*�жϽ��Ϊ�٣���ִ���������*/
	{
		printf("the bigger number is %d\n",iNumber2);
	}
	return 0;
}